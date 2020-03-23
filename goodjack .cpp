#include <iostream>
using namespace std;

int main() {
    int n,h,m,t,p;

    cin >> n;
    cin >> h >> m;

    int hour[21] = {h};
    int min[21] = {m};

    for (int i = 1; i <= n; i++){
        cin >> t;
        hour[i] = hour[i - 1];
        min[i] = min[i - 1] + t;

        while (min[i] >= 60){
            min[i] -= 60;
            hour[i] += 1;
        }

        while (hour[i] >= 24){
            hour[i] -= 24;
        }
    }

    while(n != 0){
        cin >> p;

        if (p == 0){
            return 0;
        }

        cout << "\n";

        if (hour[p] < 10){
            cout << "0" << hour[p] << ":";
        } else {
            cout << hour[p] << ":";
        }

        if (min [p] < 10){
            cout << "0" << min [p] << "\n";
        } else {
            cout << min [p] << "\n";
        }
    }
}
