#include <iostream>
using namespace std;

int main(){
    //input
    int stu = 0;
    cin >> stu;
    int a[stu][3];
    for(int i = 0; i < stu; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }
    //
    int stu_ave[stu];
    for(int i = 0; i < stu; i++){
        int sum = 0;
        for(int j = 0; j < 3; j++){
            sum += a[i][j];
        }
        stu_ave[i] = sum / 3;
    }

    int sub_ave[3];
    for(int i = 0; i < 3; i++){
        int sum = 0;
        for(int j = 0; j < stu; j++){
            sum += a[j][i];
        }
        sub_ave[i] = sum / stu;
    }

    int stu_ave_ave, sum = 0;
    for(int i = 0; i < stu; i++){
        sum += stu_ave[i];
    }
    stu_ave_ave = sum / stu;

    cout << "學生 / 國文 / 英文 / 數學 / 平均" << endl;
    for(int i = 0; i < stu; i++){
        cout << i + 1;
        for(int j = 0; j < 3; j++){
            cout << " / " << a[i][j];
        }
        cout << " / " << stu_ave[i] << endl;
    }
    cout << "總";
    for(int i = 0; i < 3; i++){
        cout << " / " << sub_ave[i];
    }
    cout << stu_ave_ave << endl;
}
