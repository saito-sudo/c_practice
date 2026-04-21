#include <stdio.h>

// 「別のファイルに global_val という変数があるから、それを使ってね」という宣言
extern int global_val;

int main() {
    printf("func.cから持ってきた値: %d\n", global_val);
    return 0;
}