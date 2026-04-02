#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int sum = 0;
    printf("数字を３つ入力してください");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    sum = a + b + c;
    printf("%d\n", sum);
    return 0;
}