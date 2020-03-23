#include <iostream>
using namespace std;

int main() {
    int b,p,n,m,busStop[1001] = {0},x,y,most = 0,least = 1;
    cin >> b >> p;
    for(int i = 1; i <= p; i++){
        cin >> x >> y;
        if(x > y){
            for(int j = y; j <= x; j++){
                busStop[j]++;
            }
        }else if(x < y){
            for(int k = x; k <= y; k++){
                busStop[k]++;
            }
        }
    }
    for(int i = 1; i <= b; i++){
        if(busStop[i] >= busStop[most]){
            most = i;
        }else if(busStop[i] < busStop[least]){
            least = i;
        }
    }
    cout << least << " " << most;
}
