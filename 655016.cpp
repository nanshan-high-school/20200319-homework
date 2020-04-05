#include <iostream>
using namespace std;
int main() {
  int chineseAvg = 0;
  int mathAvg = 0;
  int scienceAvg = 0;
  int englishAvg = 0;
  int socialAvg = 0;

  int chinese = 0;
  int math = 0;
  int science = 0;
  int social = 0;
  int english = 0;

  cout << "輸入考試人數:";
  int testPeoNum;
  cin >> testPeoNum;
  int X [testPeoNum][5];
    for (int i = 0; i < testPeoNum; i++) {
        cout << "輸入國文成績:";
        cin >> X [0][i];
        chineseAvg += X [0] [i];
        chinese = X [0] [i];

        cout << "輸入數學成績:";
        cin >> X [1][i];
        mathAvg += X [1] [i];
        math = X [1] [i];

        cout << "輸入自然成績:";
        cin >> X [2][i];
        scienceAvg += X [2] [i];
        science = X [2] [i];

        cout << "輸入社會成績:";
        cin >> X [3][i];
        socialAvg += X [3] [i];
        social = X [3] [i];

        cout << "輸入英文成績:";
        cin >> X [4][i];
        englishAvg += X [4] [i];
        english = X [4] [i];

        cout << i + 1 << "號平均:" << (chinese + math + science + social + english) /5  << "\n";
    }
        cout << "國文總平均:" << chineseAvg / testPeoNum << "\n";
        cout << "數學總平均:" << mathAvg / testPeoNum << "\n";
        cout << "自然總平均:" << scienceAvg / testPeoNum << "\n";
        cout << "社會總平均:" << socialAvg / testPeoNum << "\n";
        cout << "英文總平均:" << englishAvg / testPeoNum << "\n";
        
}
