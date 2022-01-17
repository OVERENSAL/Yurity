using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Runtime.Serialization;
using System.Runtime.Serialization.Formatters.Binary;
using System.Text;
using System.Xml;
using System.Xml.Linq;
using System.Xml.Serialization;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;

public class SaveScriipt : MonoBehaviour
{
    public GameObject successSaveView;
    public GameObject saveView;
    public InputField inputView;

    DataContractSerializer dcs = new DataContractSerializer(typeof(SaveData));
    public void save()
    {
        if (inputView.GetComponent<InputField>().text != null)
        {
            int count = new DirectoryInfo(Application.persistentDataPath).GetFiles().Length;

            SaveData data = new SaveData();
            XmlSerializer serializer = new XmlSerializer(typeof(SaveData));

            data.mapName = inputView.GetComponent<InputField>().text;
            for (int i = 0; i < State.gameObjects.Count; i++)
            {
                data.gameObjects.Add(State.gameObjects[i].name);
                data.gameObjectsMaterial.Add(State.gameObjects[i].GetComponent<Renderer>().material.ToString().Split(' ')[0]);
                data.gameObjectsPosition.Add(State.gameObjects[i].transform.localPosition);
                data.gameObjectsScale.Add(State.gameObjects[i].transform.localScale);
                data.gameObjectsRotation.Add(State.gameObjects[i].transform.localRotation);
            }
            for (int i = 0; i < State.otherObjects.Count; i++)
            {
                data.otherObjects.Add(State.otherObjects[i].name);
            }
            for (int i = 0; i < State.otherObjects.Count; i++)
            {
                data.otherObjectsPosition.Add(State.otherObjects[i].transform.localPosition);
                data.otherObjectsScale.Add(State.otherObjects[i].transform.localScale);
                data.otherObjectsRotation.Add(State.otherObjects[i].transform.localRotation);
            }
            using (TextWriter writer = new StreamWriter(@Application.persistentDataPath + "/map" + count + ".dat")) 
            {
                serializer.Serialize(writer, data);
            }
//            file.Flush();
  //          file.Position = 0;
    //        file.Close();
            Debug.Log("Game data saved!");
        }
        /*if (inputView.GetComponent<InputField>().text != null)
        {
            try
            {
                SaveData data = new SaveData();

                data.mapName = inputView.GetComponent<InputField>().text;
                for (int i = 0; i < State.gameObjects.Count; i++)
                {
                    data.gameObjects.Add(State.gameObjects[i].name);
                    data.gameObjectsMaterial.Add(State.gameObjects[i].GetComponent<Renderer>().material.ToString().Split(' ')[0]);
                    data.gameObjectsPosition.Add(State.gameObjects[i].transform.localPosition);
                    data.gameObjectsScale.Add(State.gameObjects[i].transform.localScale);
                    data.gameObjectsRotation.Add(State.gameObjects[i].transform.localRotation);
                }                
                for (int i =0; i < State.otherObjects.Count; i++)
                {
                    data.otherObjects.Add(State.otherObjects[i].name);
                }
                for (int i = 0; i < State.otherObjects.Count; i++)
                {
                    data.otherObjectsPosition.Add(State.otherObjects[i].transform.localPosition);
                    data.otherObjectsScale.Add(State.otherObjects[i].transform.localScale);
                    data.otherObjectsRotation.Add(State.otherObjects[i].transform.localRotation);
                }

                int count = new DirectoryInfo(Application.persistentDataPath).GetFiles().Length;
                FileStream file = File.Create(Application.persistentDataPath + "/map" + count + ".dat");

                dcs.WriteObject(file, data);
                file.Flush();
                file.Position = 0;

                file.Close();
            } catch (Exception e)
            {
                print(e);
            }
            */
            
            /*
            if (File.Exists(Application.persistentDataPath + "/SaveMaps.dat"))
            {
                file = File.Open(Application.persistentDataPath + "/SaveMaps.dat", FileMode.Open);
            }
            else
            {
                file = File.Create(Application.persistentDataPath + "/SaveMaps.dat");
            }
            SaveData data = new SaveData();

            data.mapName = inputView.GetComponent<InputField>().text;
            data.gameObjects = State.gameObjects;
            data.otherObjects = State.otherObjects;

            DataContractSerializer bf = new DataContractSerializer(data.GetType());
            MemoryStream streamer = new MemoryStream();

            bf.WriteObject(streamer, data);
            streamer.Seek(0, SeekOrigin.Begin);

            file.Write(streamer.GetBuffer(), 0, streamer.GetBuffer().Length);

            file.Close();

            string result = XElement.Parse(Encoding.ASCII.GetString(streamer.GetBuffer()).Replace("\0", "")).ToString();
            Debug.Log("Serialized Result: " + result);*/

            saveView.SetActive(false);
            successSaveView.SetActive(true);
        
    }

    public static List<SaveData> read()
    {
        int count = new DirectoryInfo(Application.persistentDataPath).GetFiles().Length;
        List<SaveData> listData = new List<SaveData>();

        try
        {
            for (int i = 0; i < count; i++)
            {
                if (File.Exists(Application.persistentDataPath + "/map" + i + ".dat"))
                {
                    var serializer = new XmlSerializer(typeof(SaveData));
                    var stream = new FileStream(Application.persistentDataPath + "/map" + i + ".dat", FileMode.Open);
                    var container = serializer.Deserialize(stream) as SaveData;
                    stream.Close();
                    listData.Add(container);

                }
            }
        } catch (Exception e)
        {
            print(e);
        }
        Debug.Log("Game data loaded!");
        return listData;

        /*try
        {
            DataContractSerializer dcs = new DataContractSerializer(typeof(SaveData));
            List<SaveData> listData = new List<SaveData>();
            for (int i = 0; i < count; i++)
            {
                if (File.Exists(Application.persistentDataPath + "/map" + i + ".dat"))
                {
                    FileStream file = File.Open(Application.persistentDataPath + "/map" + i + ".dat", FileMode.Open);
                    listData.Add((SaveData)dcs.ReadObject(file));
                    file.Close();
                }
            }
            return listData;
        } catch (Exception e)
        {
            print(e);
        }*/


        if (File.Exists(Application.persistentDataPath + "/SaveMaps.dat"))
        {
            
            /*try
            {
                DataContractSerializer dcs = new DataContractSerializer(typeof(SaveData));
                FileStream fs = new FileStream(fileName, FileMode.Open);
                XmlDictionaryReader reader = XmlDictionaryReader.CreateTextReader(fs, new XmlDictionaryReaderQuotas());

                SaveData data = (SaveData)dcs.ReadObject(reader);
                reader.Close();
                fs.Close();

                Debug.Log("Deserialized Result: " + data.gameObjects);

                return data;
            } catch (Exception e) {
                print(e);
            }*/
            
        }
        return null;
    }
}

//[DataContract]
[Serializable]
public class SaveData
{
    //[DataMember]
    public string mapName;
    //[DataMember]
    public List<string> gameObjects = new List<string>();
    //[DataMember]
    public List<string> gameObjectsMaterial = new List<string>();
    //[DataMember]
    public List<Vector3> gameObjectsPosition = new List<Vector3>();
    //[DataMember]
    public List<Vector3> gameObjectsScale = new List<Vector3>();
    //[DataMember]
    public List<Quaternion> gameObjectsRotation = new List<Quaternion>();

    //[DataMember]
    public List<string> otherObjects = new List<string>();
    //[DataMember]
    public List<Vector3> otherObjectsPosition = new List<Vector3>();
    //[DataMember]
    public List<Vector3> otherObjectsScale = new List<Vector3>();
    //[DataMember]
    public List<Quaternion> otherObjectsRotation = new List<Quaternion>();
}
