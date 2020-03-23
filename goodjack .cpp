#include <iostream>
using namespace std;

int main() {
    int n,s,cp[51] = {0},iv[51] = {0},upgrade,best = 0;
    cin >> n >> s;
    upgrade = s / 1000;
    for(int i = 1; i <= n; i++){
        cin >> cp[i] >> iv[i];
        if(iv[i] >= 0 && iv[i] <= 29){
            cp[i] += 10 * upgrade;
        }else if(iv[i] >= 30 && iv[i] <= 39){
            cp[i] += 50 * upgrade;
        }else if(iv[i] >= 40 && iv[i] <= 45){
            cp[i] += 100 * upgrade;
        }
        if(cp[i] > cp[best]){
            best = i;
        }
    }
    cout << best << " " << cp[best];
}
