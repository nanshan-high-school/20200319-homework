#include <iostream>
using namespace std;

int main() {
    int time;
    cin >> time;    

    bool primeDay = false;
    for (; time > 0; time--) {
        int date;
        cin >> date;
        for (int i = 2; i < date; i++) {
            if (date % i != 0) {
                primeDay = true;
            } else {
                cout << date << " isn't a Prime Day!\n";
                primeDay = false;
                break;
            }
        }
        if (primeDay) {
            cout << date << " is a Prime Day!\n";
        }
    }    
}