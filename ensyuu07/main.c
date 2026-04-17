#include <stdio.h>

void double_value(int *p) {
    *p = *p * 2; 
}

int main(void) {
    int b = 30;

    double_value(&b);

    printf("bの値は%d\n", b); 

    return 0;
}