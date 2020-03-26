#include <iostream>
using namespace std;

int main(){
    int vector = 0;
    cin >> vector;
    int a[vector][3];
    for(int i = 0; i < vector; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }
    
    int vector_ave[vector];
    for(int i = 0; i < vector; i++){
        int sum = 0;
        for(int j = 0; j < 3; j++){
            sum += a[i][j];
        }
        vector_ave[i] = sum/3;
    }

    int sub_ave[3];
    for(int i = 0; i < 3; i++){
        int sum = 0;
        for(int j = 0; j < vector; j++){
            sum += a[j][i];
        }
        sub_ave[i] = sum/vector;
    }

    int vectorsp, sum = 0;
    for(int i = 0; i < vector; i++){
        sum += vector_ave[i];
    }
    vectorsp = sum/vector;

    cout << "學生/國文/英文/數學/平均" << endl;
    for(int i = 0; i < vector; i++){
        cout << i + 1;
        for(int j = 0; j < 3; j++){
            cout << "/" << a[i][j];
        }
        cout << "/" << vector_ave[i] << endl;
    }
    cout << "總共";
    for(int i = 0; i < 3; i++){
        cout << "/" << sub_ave[i];
    }
    cout << vectorsp << endl;
}
