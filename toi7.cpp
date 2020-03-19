#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    char s[n];
    int num[n];
    int p, l, w, r;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        cin >> p;
        cin >> l;
        cin >> w;
        cin >> r;
        num[i] = p * w * r / l;
    }

    int list[n];
    for (int i = 0; i < n; i++) {
        list[i] = num[i];
    }

    int change;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (list[i] < list[j]) {
                change = list[i];
                list[i] = list[j];
                list[j] = change;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (list[i] == num[j]) {
                cout << s[j] << "\n";
            }
        }
    }
}