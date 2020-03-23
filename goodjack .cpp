#include <iostream>
using namespace std;

int main() {
    int d,divisor,num,number;
    cin >> d;
    cout << "\n";
    for(int i = 1; i <= d; i++){
        num = number;
        divisor = 10000000;

        cin >> number;
        num = number;

        bool whther = true;

        while(num > 0){
            for(int j = 2; j <= 5477; j++){
                if(j * j > num){
                    break;
                }else if(num % j == 0){
                    whther = false;
                }
            }
            num %= divisor;
            divisor /= 10;
        }

        if(whther == false){
            cout << number << " isn't a Prime Day!\n";
        }else if(whther == true){
            cout << number << " is a Prime Day!\n";
        }
    }
}
