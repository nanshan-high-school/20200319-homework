#include <iostream>
using namespace std;

int main() {

int people;
cout << "人數";
cin >> people;
int num [people] [6];
float PA [people];
num [people] [1] = 0;
num [people] [2] = 0;
num [people] [3] = 0;
num [people] [4] = 0;
num [people] [5] = 0;
PA [people] = 0;

    for (int i = 0;i < people; i++) { 
            cout << "國文";
            cin >> num [people - i] [1];
            cout << "英語";
            cin >> num [people - i] [2];
            cout << "數學";
            cin >> num [people - i] [3];
            cout << "社會";
            cin >> num [people - i] [4];
            cout << "自然";
            cin >> num [people - i] [5];
            PA [people - i] += num[people - i ][1];
            PA [people - i] += num[people - i] [2];
            PA [people - i] += num[people - i] [3];
            PA [people - i] += num[people - i] [4];
            PA [people - i] += num[people - i] [5];
            PA [people - i] = PA [people - i] / 5;

    }

    for (int i = 0;i < people; i++) {
            cout <<"\n" << "國文" <<num [people - i] [1] <<"\n";
            cout << "英語" <<num [people - i] [2] <<"\n";
            cout << "數學" <<num [people - i] [3] <<"\n";
            cout << "社會" <<num [people - i] [4] <<"\n";
            cout << "自然" <<num [people - i] [5] <<"\n";
            cout << "平均" <<PA [people - i] <<"\n";
    }
    
}
