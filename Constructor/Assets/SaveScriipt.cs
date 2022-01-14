using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Runtime.Serialization;
using System.Runtime.Serialization.Formatters.Binary;
using System.Text;
using System.Xml;
using System.Xml.Linq;
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
            SaveData data = new SaveData();

            data.mapName = inputView.GetComponent<InputField>().text;
            data.gameObjects = State.gameObjects;
            data.otherObjects = State.otherObjects;

            int count = new DirectoryInfo(Application.persistentDataPath).GetFiles().Length;
            FileStream file = File.Create(Application.persistentDataPath + "/map" + count + ".dat");           

            dcs.WriteObject(file, data);
            
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
    }

    public static List<SaveData> read()
    {
        int count = new DirectoryInfo(Application.persistentDataPath).GetFiles().Length;

        try
        {
            DataContractSerializer dcs = new DataContractSerializer(typeof(SaveData));
            List<SaveData> listData = new List<SaveData>();
            for (int i = 0; i < count; i++)
            {
                if (File.Exists(Application.persistentDataPath + "/map" + i + ".dat"))
                {
                    FileStream file = File.Open(Application.persistentDataPath + "/map" + i + ".dat", FileMode.Open);
                    listData.Add((SaveData)dcs.ReadObject(file));
                }
            }
            return listData;
        } catch (Exception e)
        {
            print(e);
        }
        

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

[DataContract]
public class SaveData
{
    [DataMember]
    public string mapName;
    [DataMember]
    public List<GameObject> gameObjects;
    [DataMember]
    public List<GameObject> otherObjects;
}
