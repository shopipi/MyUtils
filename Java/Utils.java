public static String getGlobalIP()
{
    String html = null;

    try
    {
        URL url = new URL("https://www.ugtop.com/spill.shtml");
        BufferedReader reader = new BufferedReader(new InputStreamReader(url.openStream(), "UTF-8"));

        while ((html = reader.readLine()) != null)
        {
            if (html.contains("<td><font size=+2 color=blue>"))
            {
                html = html.split(">")[2].split("<")[0];
            }
        }
    }
    catch (Exception e)
    {
      e.printStackTrace();
    }

    return html;
}
