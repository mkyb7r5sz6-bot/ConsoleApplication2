#include <stdio.h>

// 他のファイルから呼び出しを禁止（内部結合）するstatic関数
static int mult(int a, int b) {
    return a * b;
}

int main(void) {
    int x = 5;
    int y = 3;

    // mult関数の呼び出し
    int result = mult(x, y);

    printf("%d x %d = %d\n", x, y, result);

    return 0;
}