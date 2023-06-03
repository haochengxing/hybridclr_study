using HybridCLR;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Networking;

public class LoadDll : MonoBehaviour
{


    void Start()
    {
#if UNITY_ANDROID
        StartCoroutine(Android_StartGame());
#else
        StartGame();
#endif
    }

    public static byte[] ReadBytesFromStreamingAssets(string file)
    {
        // Android平台不支持直接读取StreamingAssets下文件，请自行修改实现
        return File.ReadAllBytes($"{Application.streamingAssetsPath}/{file}");
    }

    private static Assembly _hotUpdateAss;

    void StartGame()
    {
        LoadMetadataForAOTAssemblies();
#if !UNITY_EDITOR
        _hotUpdateAss = Assembly.Load(ReadBytesFromStreamingAssets("HotUpdate.dll.bytes"));
#else
        _hotUpdateAss = System.AppDomain.CurrentDomain.GetAssemblies().First(a => a.GetName().Name == "HotUpdate");
#endif
        Type entryType = _hotUpdateAss.GetType("Entry");
        entryType.GetMethod("Start").Invoke(null, null);

        Run_InstantiateComponentByAsset();

#if UNITY_STANDALONE_WIN && !UNITY_EDITOR
        // 以下代码只为了方便自动化测试，与演示无关
        File.WriteAllText("run.log", "ok", System.Text.Encoding.UTF8);
        if (File.Exists("autoexit"))
        {
            Debug.Log("==== 本程序将于3秒后自动退出 ====");
            Task.Run(async () =>
            {
                await Task.Delay(3000);
                Application.Quit(0);
            });
        }
#endif
    }

    private static void Run_InstantiateComponentByAsset()
    {
        // 通过实例化assetbundle中的资源，还原资源上的热更新脚本
        //AssetBundle ab = AssetBundle.LoadFromMemory(LoadDll.ReadBytesFromStreamingAssets("prefabs"));
        AssetBundle ab = AssetBundle.LoadFromFile(Application.streamingAssetsPath+ "/prefabs");
        GameObject cube = ab.LoadAsset<GameObject>("Cube");
        GameObject.Instantiate(cube);
    }

    /// <summary>
    /// 为aot assembly加载原始metadata， 这个代码放aot或者热更新都行。
    /// 一旦加载后，如果AOT泛型函数对应native实现不存在，则自动替换为解释模式执行
    /// </summary>
    private static void LoadMetadataForAOTAssemblies()
    {
        List<string> aotMetaAssemblyFiles = new List<string>()
        {
            "mscorlib.dll",
            "System.dll",
            "System.Core.dll",
        };
        /// 注意，补充元数据是给AOT dll补充元数据，而不是给热更新dll补充元数据。
        /// 热更新dll不缺元数据，不需要补充，如果调用LoadMetadataForAOTAssembly会返回错误
        /// 
        HomologousImageMode mode = HomologousImageMode.SuperSet;
        foreach (var aotDllName in aotMetaAssemblyFiles)
        {
            byte[] dllBytes = ReadBytesFromStreamingAssets(aotDllName + ".bytes");
            // 加载assembly对应的dll，会自动为它hook。一旦aot泛型函数的native函数不存在，用解释器版本代码
            LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, mode);
            Debug.Log($"LoadMetadataForAOTAssembly:{aotDllName}. mode:{mode} ret:{err}");
        }
    }

    private IEnumerator Android_LoadMetadataForAOTAssemblies()
    {
        List<string> aotMetaAssemblyFiles = new List<string>()
        {
            "mscorlib.dll",
            "System.dll",
            "System.Core.dll",
        };
        /// 注意，补充元数据是给AOT dll补充元数据，而不是给热更新dll补充元数据。
        /// 热更新dll不缺元数据，不需要补充，如果调用LoadMetadataForAOTAssembly会返回错误
        /// 
        HomologousImageMode mode = HomologousImageMode.SuperSet;
        foreach (var aotDllName in aotMetaAssemblyFiles)
        {

            Uri uri = new Uri(Path.Combine(Application.streamingAssetsPath, aotDllName + ".bytes"));
            UnityWebRequest request = UnityWebRequest.Get(uri);

            yield return request.SendWebRequest();

            byte[] dllBytes = request.downloadHandler.data;
            // 加载assembly对应的dll，会自动为它hook。一旦aot泛型函数的native函数不存在，用解释器版本代码
            LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, mode);
            Debug.Log($"LoadMetadataForAOTAssembly:{aotDllName}. mode:{mode} ret:{err}");
        }
    }

    IEnumerator Android_StartGame()
    {
        yield return StartCoroutine(Android_LoadMetadataForAOTAssemblies());

        Uri uri = new Uri(Path.Combine(Application.streamingAssetsPath, "HotUpdate.dll.bytes"));
        UnityWebRequest request = UnityWebRequest.Get(uri);

        yield return request.SendWebRequest();

        _hotUpdateAss = Assembly.Load(request.downloadHandler.data);

        Type entryType = _hotUpdateAss.GetType("Entry");
        entryType.GetMethod("Start").Invoke(null, null);

        Run_InstantiateComponentByAsset();

#if UNITY_STANDALONE_WIN && !UNITY_EDITOR
        // 以下代码只为了方便自动化测试，与演示无关
        File.WriteAllText("run.log", "ok", System.Text.Encoding.UTF8);
        if (File.Exists("autoexit"))
        {
            Debug.Log("==== 本程序将于3秒后自动退出 ====");
            Task.Run(async () =>
            {
                await Task.Delay(3000);
                Application.Quit(0);
            });
        }
#endif
    }

}
