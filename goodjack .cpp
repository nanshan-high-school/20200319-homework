#include <iostream>
using namespace std;

int main() {
    int n,d[100001],s[100001],t[100001],last1[6],number;
    int day[6] = {0,1,2,3,4,5},last2[6] = {};

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> d[i] >> s[i] >> t[i];
    }

    for(int j = 1; j <= 5; j++){
        last1[j] = 11;
        for(int i = 1; i <= n; i++){
            if(d[i] == day[j] && t[i] < last1[j]){
                last1[j] = t[i];
            }
        }
        if(last1[j] != 11){
            last2[j] = last1[j];
            number++;
        }
    }

    for(int k = 1; k <= 9; k++){
        for(int j = 1; j <= 5; j++){
            last1[j] = 11;
            for(int i = 1; i <= n; i++){
                if(d[i] == day[j] && t[i] > last2[j] && t[i] < last1[j] && s[i] >= last2[j]){
                    last1[j] = t[i];
                }
            }
            if(last1[j] > last2[j] && last1[j] != 11){
                last2[j] = last1[j];
                number++;
            }
        }
    }
    cout << number;
}
