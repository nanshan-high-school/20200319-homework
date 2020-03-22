#include <iostream>
using namespace std;

int main() {
    int people;

    cout << "請輸入人數:";
    cin >> people;

    int grade[people][5];

    for (int i = 0; i < people; i++) {
        cout << "第" << i + 1 << "人:\n";

        for (int j = 0; j < 5; j++) {
            cin >> grade[i][j];
        }
    }

    float classAvg[5];
    int total;

    for (int k = 0; k < 5; k++) {
        for (int l = 0; l < people; l++) {
            total += grade[l][k]; 
        }

        classAvg[k] = total / people;
        total = 0;
    }

    float personAvg[people];

    for (int m = 0; m < people; m++) {
        for (int n = 0; n < 5; n++) {
            total += grade[m][n];
        }

        personAvg[m] = total / 5;
        total = 0;
    }

    for (int i = 0; i < 5; i++) {
        cout << i + 1 << "個班平均:" << classAvg[i] << "\n";
    }

    for (int j = 0; j < people; j++) {
        cout << j + 1 << "個人的個人平均:" << personAvg[j] << "\n";
    }
}
