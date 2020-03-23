#include <iostream>
using namespace std;

int main() {
    int N1;
    int N2;
    cin >> N1;

    int M[1001] = {0};
    long long C;
    int P;

    for(int i = 0; i < N1; i++){
        cin >> P;
        cin >> C;
        M[P] += C;
    }

    cin >> N2;

    for(int i = 0; i < N2; i++){
        cin >> P;
        cin >> C;
        M[P] += C;
    }
    int flag = 0;
    for(int i = 1000 ;i >= 0; i--){
        if(M[i] != 0){
            cout << i << ":" << M[i] << "\n";
        } else {
            flag = 1;
        }
    }
    while (flag == 0){
        cout << "NULL!";
    }
}
