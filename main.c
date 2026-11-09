#include <stdio.h>

int main(void) {
    int num;

    printf("整数を入力してください: ");
    if (scanf("%d", &num) != 1) {
        return 1;
    }

    // 10以上15未満 かつ 12以外のときOK
    if (num >= 10 && num < 15 && num != 12) {
        printf("OK\n");
    } else {
        printf("NG\n");
    }

    return 0;
}
