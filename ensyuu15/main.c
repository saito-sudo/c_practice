#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int score;
};

int main() {
    struct Student data[] = {
        {"sara", 88},
        {"gintonic", 12},
        {"aida", 44},
        {"yankoro", 35},
        {"kumazaki", 44},
        {"onizuka", 93}
    };
    int n = 6; // データ数
    struct Student temp;

    // --- 1. 名前順にソート（昇順） ---
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(data[j].name, data[j + 1].name) > 0) {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    printf("【名前順】\n");
    for (int i = 0; i < n; i++) {
        printf("%-10s : %d\n", data[i].name, data[i].score);
    }

    // --- 2. 成績順にソート（降順、同点なら名前順） ---
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            int swap_flag = 0;
            
            if (data[j].score < data[j + 1].score) {
                // 点数が低い方を後ろへ
                swap_flag = 1;
            } 
            else if (data[j].score == data[j + 1].score) {
                // 点数が同じなら名前順（辞書順）で比較
                if (strcmp(data[j].name, data[j + 1].name) > 0) {
                    swap_flag = 1;
                }
            }

            if (swap_flag) {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    printf("\n【成績順】\n");
    for (int i = 0; i < n; i++) {
        printf("%-10s : %d\n", data[i].name, data[i].score);
    }

    return 0;
}