#include <iostream>
using namespace std;

int main() {
    int b;
    cin >> b;

    int p;
    cin >> p;

    int s[1000] = {0};
    int x;
    int y;
    for (int i = 0; i < p; i++) {
        cin >> x;
        cin >> y;
        for (int j = 0; j < 1000; j++) {
            if (x < y) {
                if ((j + 1 >= x) && (j + 1 <= y)) {
                    s[j] += 1;
                }
            } else {
                if ((j + 1 >= y) && (j + 1 <= x)) {
                    s[j] += 1;
                }
            }
        }
    }

    int min = 1000;
    int minNum;
    for (int i = 0; i < b; i++) {
        if (s[i] < min) {
            min = s[i];
            minNum = i + 1;
        }
    }

    int max = -1;
    int maxNum;
    for (int i = b; i > 0; i--) {
        if (s[i] > max) {
            max = s[i];
            maxNum = i + 1;
        }
    }
    
    cout << minNum << " " << maxNum;
}