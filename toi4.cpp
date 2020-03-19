#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int t;
    cin >> t;

    int input[n][t];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < t; j++) {
            cin >> input[i][j];
        }
    }

    int AND[t]; 
    int OR[t];
    int XOR[t];

    int total = 0;

    for (int i = 0; i < t; i++) {
        total = 0;
        for (int j = 0; j < n; j++) {         
            total += input[j][i];

            if (total == n) {
                AND[i] = 1;                
            } else {
                AND[i] = 0;
            }

            if (total >= 1) {
                OR[i] = 1;
            } else {
                OR[i] = 0;
            }       

            if (total % 2 != 0) {
                XOR[i] = 1;
            } else {
                XOR[i] = 0;
            }
        }
    }

    cout << "AND: ";
    for (int i = 0; i < t; i++) {
        cout << AND[i] << " ";
    }

    cout << "\n OR: ";
    for (int i = 0; i < t; i++) {
        cout << OR[i] << " ";
    }

    cout << "\nXOR: ";
    for (int i = 0; i < t; i++) {
        cout << XOR[i] << " ";
    }
}