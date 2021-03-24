// グローバルIP
public static string getGlobalIP()
{
    WebClient wc = new WebClient();
    string gIP;

    try
    {
        wc.Encoding = Encoding.UTF8;
        string html = wc.DownloadString("https://www.ugtop.com/spill.shtml");
        string[] elements1 = html.Split('>');
        string[] elements2 = elements1[42].Split('<');
        gIP = elements2[0];
    }
    catch (Exception e)
    {
        gIP = e.Message;
    }

    return gIP;
}
