#include <iostream>
using namespace std;

int main() {
    int videos[51] = {0},n,p[51],l[51],w[51],r[51],num;
    char s[51][16] = {0};

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> s[i] >> p[i] >> l[i] >> w[i] >> r[i];
        videos[i] = (p[i] * w[i] * r[i] / l[i]);
    }

    bool whther[51] = {};
    
    for(int j = 1; j <= n; j++){
        num = 0;
        for(int i = 1; i <= n; i++){
            if(whther[i] == false){
                if(videos[i] > videos[num]){
                    num = i;
                }
            }
        }
        whther[num] = true;
        cout << s[num] << "\n";
    }
}
