#include <iostream>
using namespace std;

int main() {
    int people;

    cout << "有多少學生?:";
    cin >> people;

    float grade[people][5];

    for (int i = 1; i <= people; i++) {
        cout << "第" << i << "人:\n";

        for (int j = 1; j <= 5; j++) {
            cin >> grade[i][j];
        }
    }

    float classAvg[5];
    float total;

    for (int l = 1; l <= 5; l++) {
        for (int k = 1; k <= people; k++) {
            total += grade[k][l]; 
        }

        classAvg[l] = total / people;
        total = 0;
    }

    float personAvg[people];

    for (int m = 1; m <= people; m++) {
        for (int n = 1; n <= 5; n++) {
            total += grade[m][n];
        }

        personAvg[m] = total / 5;
        total = 0;
    }

    for (int i = 1; i <= 5; i++) {
        cout << "第" << i << "科的平均:" << classAvg[i] << "\n";
    }

    for (int j = 1; j <= people; j++) {
        cout << "第" << j << "個人的平均:" << personAvg[j] << "\n";
    }
}
