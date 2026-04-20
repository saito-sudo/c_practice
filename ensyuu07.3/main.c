#include <stdio.h>
#include <string.h>

void printReverse(char *s) {
    int len = strlen(s);

    for (int i = len - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }
    printf("\n");
}

int main() {
    printReverse("abc");
    return 0;
}