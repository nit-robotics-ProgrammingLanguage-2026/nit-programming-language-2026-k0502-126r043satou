#include <stdio.h>

int main(void) {
    int num;

    // 自動採点システム用に入力案内メッセージを削る
    if (scanf("%d", &num) != 1) {
        return 1;
    }

    if (num >= 10 && num < 15 && num != 12) {
        printf("OK\n");
    } else {
        printf("NG\n");
    }

    return 0;
}
