#include <iostream>
using namespace std;

int main() {
    int height;
    cin >> height;

    int width;
    cin >> width;

    string sign;
    cin >> sign;

    int letter[height];
    for (int i = 0; i < height; i++) {
        cin >> letter[i];
    }

    int num;
    for (int i = 0; i < height; i++) {
        num = 1;
        for (int k = 1; k < width; k++) {
            num *= 2;
        } 
        for (int j = width; j > 0; j--) {  
            letter[i] -= num;            
            if (letter[i] >= 0) {
                cout << sign;
            } else if (letter[i] < 0) {
                letter[i] += num;
                cout << ".";
            }
            num /= 2;
        }
        cout << "\n";
    }
}