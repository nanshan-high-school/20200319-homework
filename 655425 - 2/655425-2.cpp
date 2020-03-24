#include <iostream>
using namespace std;

int main(){
    int n = 0;
    cout << "請輸入檢測人數:";
    cin >> n;
    int g[n];
    int a[n];
    float h[n];
    float w[n];
    float t[n];  
    int i = 0;
    for (i = 0; i < n; i++){
        cin >> g[i];
        cin >> a[i];
        cin >> h[i];
        cin >> w[i];
        if (g[i] == 1){
            t[i] = (13.7 * w[i]) + (5 * h[i]) - (6.8 * a[i]) + 66;
        };
        if (g[i] == 0){
            t[i] = (9.6 * w[i]) + (1.8 * h[i]) - (4.7 * a[i]) + 655;
        };
        cout << t[i];
    }
}