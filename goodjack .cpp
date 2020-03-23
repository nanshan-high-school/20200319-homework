#include <iostream>
using namespace std;

int main() {
    char c = '\0',bitmap[63][63] = {0};
    int n,m,bit;
    long long s,num;

    cin >> n >> m >> c;

    for (int i = 1; i <= n; i++){
        num = 2305843009213694000;
        bit = 62;
        cin >> s;
        while(bit > 0){
            if(s >= num){
                s -= num;
                bitmap[i][bit] = 1;
            }else if(s < num){
                bitmap[i][bit] = 2;
            }
            num /= 2;
            bit--;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if (bitmap[i][j] == 1){
                cout << c << ' ';
            }else if(bitmap[i][j] == 2){
                cout << ". ";
            }
        }
        cout << "\n";
    }
}
