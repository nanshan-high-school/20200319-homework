#include <iostream>
using namespace std;

int main() {
    int people;
    cout << "人數：";
    cin >> people;
    float score[100][6] = {0};
    for(int i = 0; i < people; i++) {
        float avg = 0;
        for(int j = 0; j < 5; j++) {
            cout << i + 1 << "-" << j + 1 << "：";
            cin >> score[i][j];
            avg += score[i][j];
        }
        avg /= 5;
        score[i][5] = avg;
    }

    for(int i = 0; i < people; i++) {
        cout << i + 1 << "號平均：" << score[i][5] << "\n"; 
    }
    for(int i = 0; i < 5; i++) {
        float subject = 0;
        for(int j = 0; j < people; j++) {
            subject += score[j][i];
        }
        subject /= people;
        cout << i + 1 << "科平均：" << subject << "\n";
    }
}
