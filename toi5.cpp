#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int square[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> square[i][j];
        }
    }

    int max[n * n / 4];
    int maxNum = -1;
    int width = 0, height = 0;
    int time = 1;
    for (int i = 0; i < (n * n / 4); i++) {
        maxNum = -1;
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                if (square[j + height][k + width] > maxNum) {
                    maxNum = square[j + height][k + width];
                }
            }
        }
        max[i] = maxNum;        
        
        width += 2;
        if (time == n / 2) {
            width = 0;
            height += 2;
            time = 1;
        } else {
            time++;
        }
    }

    for (int i = 0; i < n * n / 4; i++) {
        cout << max[i] << " ";
        if ((i + 1) % (n / 2) == 0) {
            cout << "\n";
        }
    }
}
