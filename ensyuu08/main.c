#include <stdio.h>

// --- 1. ZERO/正/負の判別用関数 ---
void print_zero()  { printf("数はZEROです\n"); }
void print_plus()  { printf("数は正の整数です\n"); }
void print_minus() { printf("数は負の整数です\n"); }

// --- 2. 奇数/偶数の判別用関数 ---
void print_even() { printf("数は偶数です\n"); }
void print_odd()  { printf("数は奇数です\n"); }
void print_none() { printf("----------\n"); }

// --- 3. 素数の判別用関数 ---
void is_prime_no()  { printf("数は素数ではありません\n"); }
void is_prime_yes() { printf("数は素数です\n"); }

int main(void) {
    int a=0;

    printf("整数を入力してください: ");
    if (scanf("%d", &a) != 1) return 1; // ここだけ入力エラー対策でifを使用！

    // --- 判別1: ZERO/正/負 ---
    // インデックス計算: 負なら0, 0なら1, 正なら2
    void (*jt1[])() = { print_minus, print_zero, print_plus };
    int idx1 = (a > 0) - (a < 0) + 1;
    
    printf("\n[判別1] ZERO/正の整数/負の整数を判別します。\n");
    jt1[idx1]();

    // --- 判別2: 奇数/偶数 ---
    // 0の時は0、それ以外は1(偶数)か2(奇数)を計算
    void (*jt2[])() = { print_none, print_even, print_odd };
    int is_not_zero = (a != 0);
    int odd_even = (a % 2 != 0) + 1; 
    int idx2 = is_not_zero * odd_even;

    printf("\n[判別2] 奇数/偶数（0の時はハイフン）を判別します。\n");
    jt2[idx2]();

    // --- 判別3: 素数 ---
    // 判定結果 0(No) か 1(Yes) をインデックスにする
    void (*jt3[])() = { is_prime_no, is_prime_yes };
    
    int is_prime = (a >= 2); 
    for (int i = 2; i * i <= a; i++) {
        // ifを使わずに、割り切れたら 0 が掛け算される仕組み
        is_prime = is_prime && (a % i != 0);
    }

    printf("\n[判別3] 素数を判別します。\n");
    jt3[is_prime]();

    return 0;
}