#include <stdio.h>

int main(void)
{
    int num;          // 入力された数を入れる
    int sum = 0;      // 合計をためる（最初は0）
    int count = 0;    // 何回入力されたか数える（最初は0）
    double average;   // 平均（小数点まで出したいのでdouble型）

    printf("数値を入力してください:\n");

    while (1) {
        printf("入力> ");
        scanf("%d", &num); // 数値を入力

        if (num == 0) {
            break; // 0が入力されたらループを抜ける
        }

        sum = sum + num; // 今の合計に足す
        count++;         // 入力回数を1増やす
    }

    // 1回でも入力されていたら平均を計算
    if (count > 0) {
        average = (double)sum / count; // 割り算で平均を出す
        printf("\n--- 結果 ---\n");
        printf("合計: %d\n", sum);
        printf("個数: %d\n", count);
        printf("平均値: %.2f\n", average);
    } else {
        printf("数値が入力されませんでした。\n");
    }

    return 0;
}