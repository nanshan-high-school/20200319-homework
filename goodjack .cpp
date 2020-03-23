#include <iostream>
using namespace std;

int main() {
    int n,h = 0,w = 0,f[46] = {0,1,1};
    cin >> n;
    for(int i = 3; i <= n; i++){
        f[i] = f[i - 1] + f[i - 2];
    }
    if(n % 2 == 0){
        h = f[n];
    }else{
        for(int i = 1; i <= n; i += 2){
            h += f[i];
        }
    }
    if(n % 2 != 0){
        w = f[n];
    }else{
        w +=f[1];
        for(int i = 2; i <= n; i += 2){
            w += f[i];
        }
    }
    cout << h << ":" << w;
}
