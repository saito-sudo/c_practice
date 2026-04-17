#include <stdio.h>

void swap(int *x, int *y) {
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main(void) {
    int a = 10;
    int b = 100;

    printf("%d->%d\n", a, b); // 10->100

    swap(&a, &b);

    printf("%d->%d\n", a, b); // 100->10

    return 0;
}