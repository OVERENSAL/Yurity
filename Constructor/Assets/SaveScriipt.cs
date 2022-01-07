using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Runtime.Serialization;
using System.Runtime.Serialization.Formatters.Binary;
using System.Text;
using System.Xml;
using System.Xml.Linq;
using UnityEngine;

public class SaveScriipt : MonoBehaviour
{
    static public void save()
    {
        FileStream file = File.Create(Application.persistentDataPath + "/SaveMaps.dat");

        SaveData data = new SaveData();
        data.gameObjects = State.gameObjects;

        DataContractSerializer bf = new DataContractSerializer(data.GetType());
        MemoryStream streamer = new MemoryStream();

        bf.WriteObject(streamer, data);
        streamer.Seek(0, SeekOrigin.Begin);

        file.Write(streamer.GetBuffer(), 0, streamer.GetBuffer().Length);

        file.Close();

        string result = XElement.Parse(Encoding.ASCII.GetString(streamer.GetBuffer()).Replace("\0", "")).ToString();
        Debug.Log("Serialized Result: " + result);
    }

    public static List<GameObject> read()
    {
        string fileName = Application.persistentDataPath + "/SaveMaps.dat";
        DataContractSerializer dcs = new DataContractSerializer(typeof(SaveData));
        FileStream fs = new FileStream(fileName, FileMode.Open);
        XmlDictionaryReader reader = XmlDictionaryReader.CreateTextReader(fs, new XmlDictionaryReaderQuotas());

        SaveData data = (SaveData)dcs.ReadObject(reader);
        reader.Close();
        fs.Close();

        Debug.Log("Deserialized Result: " + data.gameObjects);

        return data.gameObjects;
    }
}

[DataContract]
public class SaveData
{
    [DataMember]
    public List<GameObject> gameObjects;
}