#include <iostream>
using namespace std;

int main() {
    int n,times = 1;
    cin >> n;
    while(n >= (4 * times)){
        n -= (4 * times);
        times++;
    }
    if(n < times){
        cout << "Pen";
    }else if(n < 2 * times){
        cout << "Pineapple";
    }else if(n < 3 * times){
        cout << "Apple";
    }else if(n < 4 * times){
        cout << "Pineapple pen";
    } 
}
