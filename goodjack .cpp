#include <iostream>
using namespace std;

int main() {
    int n,grade[3] = {'4','6','8'};
    cin >> n;
    char s[100][11] = {0},id[100][10] = {0},college[10] = {"AEHILMOST"};
    for(int i = 0; i < n; i++){
        cin >> id[i] >> s[i];
    }
    bool already[100] = {false}; 
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < n; k++){
                if(already[k] == false){
                    if(id[k][8] == college[i] && id[k][0] == grade[j]){
                        cout << id[k][8] << ": " << s[k] << "\n";;
                        already[k] = true;
                    }
                }
            }
        }
    }
}
