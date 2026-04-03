#include <stdio.h>

int main(void)
{
    int a = 0;

    printf("整数を入力してください: ");
    scanf("%d", &a);

    if (a == 0) printf("数はZEROです\n");
    if (a > 0) printf("数は正の整数です\n");
    if (a < 0) printf("数は負の整数です\n");

    if (a == 0) {
        printf("----------\n");
    } else {
        if (a % 2 == 0) {
            printf("数は偶数です\n");
        } else {
            printf("数は奇数です\n");
        }
    }

    int i, is_prime = 1;
    if (a < 2) {
        is_prime = 0;
    } else {
        for (i = 2; i < a; i++) {
            if (a % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }
    if (is_prime == 1) printf("数は素数である\n");

    return 0;
}