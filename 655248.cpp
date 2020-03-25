#include <iostream>
using namespace std;
int main() {
    int people;
    float score[1000][5] = {0};
    float avgPersonal[10] = {0};
    float buffer = 0;
    float avgSubject[10] = {0};


    cout << "請依序輸入國英數自社";
    cin >> people;
    for (int i = 0; i < people; i++){
        cin >> score[i][0];
        cin >> score[i][1];
        cin >> score[i][2];
        cin >> score[i][3];
        cin >> score[i][4];
    }
    for (int j = 0; j < people; j++){
        for(int k = 0; k < 5; k++){
            buffer = score[j][k] + buffer;
            avgPersonal[j] = buffer;

        } 
        cout << avgPersonal[j]/5 << "\n";
        buffer = 0;
    }
    buffer = 0;
    for(int l = 0; l < 5; l++){
        for(int m = 0; m < people; m++){
            buffer = score[m][l] + buffer;
            avgSubject[l] = buffer;
        }
        buffer = 0;
        cout << avgSubject[l]/people << "\n";
    }

}
