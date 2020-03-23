#include <iostream>
using namespace std;

int main() {
    int n,a[8],b[8],c[8];
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i] >> b[i] >> c[i];
    }
    bool empty = {true};
    for(int i = 1; i <= n; i++){
        empty = false;
        for(int j = 1; j <= 500; j++){
            if(a[i] < j && j < b[i] && j % c[i] != 0){
                cout << j << " ";
                empty = true;
            }
        }
        if(empty == false){
            cout << "No free parking spaces.";
        }
        cout << "\n";
    }
}
