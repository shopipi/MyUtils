// 安全な入力待ち
void HitAnyKeyToContinue()
{
    printf("\n\nキーを押して続行します...");
    getch();       /* 入力待ち */
    fflush(stdin); /* キーボードバッファをクリア (Linuxなどでは使えない) */
    system("cls"); /* 画面の文字を全てクリア */
}

// Minecraftのコンソールカラー
#define COLOR_DARK_GRAY    "\33[0;30;1m"
#define COLOR_RED          "\33[0;31;1m"
#define COLOR_DARK_RED     "\33[0;31;22m"
#define COLOR_GREEN        "\33[0;32;1m"
#define COLOR_DARK_GREEN   "\33[0;32;22m"
#define COLOR_YELLOW       "\33[0;33;1m"
#define COLOR_GOLD         "\33[0;33;22m"
#define COLOR_BLUE         "\33[0;34;1m"
#define COLOR_DARK_BLUE    "\33[0;34;22m"
#define COLOR_LIGHT_PURPLE "\33[0;35;1m"
#define COLOR_DARK_PURPLE  "\33[0;35;22m"
#define COLOR_AQUA         "\33[0;36;1m"
#define COLOR_DARK_AQUA    "\33[0;36;22m"
#define COLOR_WHITE        "\33[0;37;1m"
#define COLOR_GRAY         "\33[0;37;22m"
#define COLOR_RESET        "\33[0m"

// ランダムInt
int Rand(int min, int max)
{
    srand((unsigned)time(NULL));
    return (rand() % max) + min;
}
