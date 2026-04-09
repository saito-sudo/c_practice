#include <stdio.h>

int main (void)

#define PI 3.1415926535
{
    double rad = 0.0;

    printf("半径を入力してください:");
    scanf("%lf", &rad);

    printf("円周は %.2f\n", 2 * rad * 3.14);
    printf("面積は %.2f\n", rad * rad * 3.14);

    return 0;
}