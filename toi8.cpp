#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int schedule[n][3];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> schedule[i][j];
        }
    }

    int answer = n;
    for (int i= 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (schedule[i][0] == schedule[j][0]) {
                if (schedule[i][1] >= schedule[j][1] && schedule[i][1] <= schedule[j][2]) {
                    answer -= 1;
                }
            }
        }
    }

    cout << answer;
}