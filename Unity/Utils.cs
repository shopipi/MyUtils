// 全オブジェクトを取得
public List<GameObject> GetAllObjectsOnlyInScene()
{
    List<GameObject> objectsInScene = new List<GameObject>();

    foreach (GameObject go in Resources.FindObjectsOfTypeAll(typeof(GameObject)) as GameObject[])
    {
        if (!EditorUtility.IsPersistent(go.transform.root.gameObject) && !(go.hideFlags == HideFlags.NotEditable || go.hideFlags == HideFlags.HideAndDontSave))
        objectsInScene.Add(go);
    }

    return objectsInScene;
}
