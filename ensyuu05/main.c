#include <stdio.h>

int main(void)
{
    int steps = 0;
    int i = 0, j = 0;

    printf("何段？: ");

    if (scanf("%d", &steps) != 1) {
        printf("エラー：数値を入力してください。\n");
        return 1; 
    }

    printf("--------------------\n");

    for (i = 1; i <= steps; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}