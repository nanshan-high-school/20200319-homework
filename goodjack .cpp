#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char palindrome[501] = {0};
    cin >> palindrome;

    int length = strlen(palindrome);
    int halfLength = length / 2;

    if (length % 2 != 0){
        cout << "no";
        return 0;
    }
    for(int i = 0; i < halfLength; i++){
        if(palindrome[i] != palindrome[length - 1 - i]){
            cout << "no";
            return 0;
        }
    }
    cout << "yes\n";
    for(int i = 0; i < halfLength; i++){
        cout << palindrome[i];
    }
}
