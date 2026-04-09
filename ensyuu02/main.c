#include <stdio.h>

int main(void)
{
    int a = 0;

    printf("整数を入力してください: ");
    scanf("%d", &a);

    /*判別1*/
    printf("ZERO/正の整数/負の整数を判別します。");
    if (a == 0){
         printf("数はZEROです\n");
    }else if (a > 0){
        printf("数は正の整数です\n");
    }else if (a < 0){
        printf("数は負の整数です\n");
    }

     /*判別2*/
    printf("奇数/偶数　【0の時は、「----------」を表示】判別します。");
    if (a == 0) {
        printf("----------\n");
    } else {
        if (a % 2 == 0) {
            printf("数は偶数です\n");
        } else {
            printf("数は奇数です\n");
        }
    }

    /*判別3*/
    printf("素数を判別します。");
    int i, is_prime = 1;
    if (a < 2) {
        is_prime = 0;
    } else {
        for (i = 2; i*i<=a ; i++) {
            if (a % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }
    if (is_prime == 1){
        printf("数は素数である\n");
    }

    return 0;
}