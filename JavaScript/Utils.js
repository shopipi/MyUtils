// ランダムInt
function getRandomInt(min, max)
{
  return Math.floor(Math.random() * (max - min + 1) + min);
}

// Chromeポップアップブックマーク
javascript:
(
  function()
  {
    let input = prompt("ウィンドウサイズ", "1280x720");

    let width  = input.split("x")[0];
    let height = input.split("x")[1];
    
    window.open(top.document.URL, null, `screenX=300,screenY=100,width=${width},height=${height},toolbar=yes,menubar=yes,scrollbars=yes`)
  }
)()
