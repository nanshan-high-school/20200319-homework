#include <iostream>
using namespace std;

int main(){
    int map[101][101] = {0} , change[101][101] = {0} , n , m , changeAdd[101][101] = {0};

    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> map[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> change[i][j];
        }
    }
    for(int a = 1; a <= n; a++){
        for(int b = 1; b <= m; b++){
            for(int d = 1; d <= m; d++){
                changeAdd[a][b] += change[a][d];
            }
        }
    }
    for(int a = 1; a <= n; a++){
        for(int b = 1; b <= m; b++){
            for(int c = 1; c <= n; c++){
                changeAdd[a][b] += change[c][b];
            }
            changeAdd[a][b] -= change[a][b];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if (map[i][j] == 1){
                if (changeAdd[i][j] % 2 == 1){
                    map[i][j] = 0;
                }
            }else if (map[i][j] == 0){
                if (changeAdd[i][j] % 2 == 1){
                    map[i][j] = 1;
                }
            }
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout << map[i][j];
        }
        cout << "\n";
    }
}
