#include <iostream>
using namespace std;

int main() {
    float m,a,n,e;
    int day[8] = {0};
    int time[8] = {0};
    int maxDay = 0;
    int maxTime = 0;

    for(int i = 1; i < 7; i++){
        cin >> m >> a >> n >> e;
        
        day[i] = m + a + n + e;
        time[1] += m;
        time[2] += a;
        time[3] += n;
        time[4] += e;
    }
    
    for(int i = 1; i < 7; i++){
        if (day[i] > day[maxDay]){
            maxDay = i;
        }
        if (time[i] > time[maxTime]){
            maxTime = i;
        } 
    }

    cout << "\n" << maxDay << "\n";
    if (maxTime == 1){
        cout << "morning";
    } else if (maxTime == 2){
        cout << "afternoon";
    } else if (maxTime == 3){
        cout << "night";
    } else {
        cout << "early morning";
    }
}
