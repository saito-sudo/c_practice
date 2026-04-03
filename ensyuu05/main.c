#include <stdio.h>

int main(void)
{
    int steps; // 段数
    int i, j;  // ループ用の変数

    // 1. 質問する
    printf("何段？: ");
    scanf("%d", &steps);

    // 2. 仕切りを入れる
    printf("--------------------\n");

    // 3. 三角形を生成する
    // 外側のループ：行（縦方向）を管理
    for (i = 1; i <= steps; i++) {
        
        // 内側のループ：列（横方向）に「*」を並べる
        // i段目には i個の * を表示する
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        // 1行分「*」を出し終わったら改行する
        printf("\n");
    }

    return 0;
}