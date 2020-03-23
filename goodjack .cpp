#include <iostream>
using namespace std;

int main() {
    int n,t,number[11][11] = {0},AND[11] = {0},OR[11] = {0},XOR[11] = {0};
    cin >> n >> t;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= t; j++){
            cin >> number[i][j];
            AND[j] += number[i][j];
            OR[j] += number[i][j];
            XOR[j] += number[i][j];
        }
    }
    cout << "\nAND: ";
    for(int j = 1; j <= t; j++){
        if(AND[j] == n){
            cout << "1 ";
        }else if(AND[j] != n){
            cout << "0 ";
        }
    }
    cout << "\n OR: ";
    for(int j = 1; j <= t; j++){
        if(OR[j] > 0){
            cout << "1 ";
        }else if(OR[j] <= 0){
        cout << "0 ";
        }
    }
    cout << "\nXOR: ";
    for(int j = 1; j <= t; j++){
        if(XOR[j] % 2 == 1){
            cout << "1 ";
        }else if(XOR[j] % 2 == 0){
            cout << "0 ";
        }
    }
}
