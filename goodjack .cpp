#include <iostream>
using namespace std;

int main(){
    int tester;
    string subject[6] = {"0","國", "英", "數", "社", "自"};
    float average,allS[6] = {0};

    cout << "輸入人數:";
    cin >> tester;
    cout << "輸入成績\n";
    int score[tester + 1][6],allP[999999] = {0};
    for(int i = 1; i <= tester; i++){
        cout << "第" << i << "人\n";
        for(int j = 1; j <= 5; j++){
            cout << subject[j] << ":";
            cin >> score[i][j];
            allS[j] += score[i][j];
            allP[i] += score[i][j];
        }
    }
    cout << "各科平均:\n";
    for(int j = 1; j <= 5; j++){
        average = allS[j] / tester;
        cout << average << "\n";
    }
    cout << "個人平均\n";
    for(int j = 1; j <= tester; j++){
        average = allP[j] / 5.0;
        cout << "第" << j << "人" << average << "\n";
    }
}
