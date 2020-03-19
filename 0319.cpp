#include <iostream>
using namespace std;

int main() {
    int people;
    cin >> people;

    cout << "\n"; 
    string subject[5] = {"Chinese", "English", "Math", "Science", "Social"};
    int grade[people][5];
    for (int i = 0; i < people; i++) {
        cout << i + 1 << "\n";
        for (int j = 0; j <5; j++) {
            cout << subject[j] << ": ";
            cin >> grade[i][j];
        }
        cout << "\n";
    }

    cout << "\n";
    
    int total;
    float avg;
    for (int i = 0; i < people; i++) {
        total = 0;
        avg = 0;
        cout << i + 1 << "'s avg: ";
        for (int j = 0; j < 5; j++) {
            total += grade[i][j];
            if (j == 4) {
                avg = total /= 5;
                cout << avg << "\n";
            }
        } 
    }

    cout << "\n";

    for (int i = 0; i < 5; i++) {
        total = 0;
        avg = 0;
        cout << subject[i] << " avg: ";
        for (int j = 0; j < people; j++) {
            total += grade[j][i];
            if (j == people - 1) {
                avg = total /= people;
                cout << avg << "\n";
            }
        }
    }
}