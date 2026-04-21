#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;

    printf("計算式を入力 (例: 5 + 2): ");
    
    // 入力を「数値」「文字」「数値」に分解
    // 戻り値が3でない場合は、入力形式が間違っている
    if (scanf("%lf %c %lf", &num1, &op, &num2) != 3) {
        printf("エラー: 入力形式が正しくありません。\n");
        return 1;
    }

    // 演算子によって処理を分ける
    switch (op) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/':
            if (num2 == 0) {
                printf("エラー: 0で割ることはできません。\n");
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            printf("エラー: 演算子 '%c' は対応していません。\n", op);
            return 1;
    }

    printf("答え: %f\n", result);
    return 0;
}