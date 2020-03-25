#include <iostream>
using namespace std;

int main() {
  int chinese = 0;
  int english = 0;
  int math = 0;
  int soc = 0;
  int science = 0;

  cout<<"請輸入多少人考學測";

  int students = 0;
  cin >> students;
  int x[5][students];
  for(int i = 0;i < students;i++){
  cout<<"輸入國文成績";
  cin>>x[0][i];
  int chiScore =x[0][i];
  chinese += x[0][i];

  cout << "輸入英文成績";
  cin >> x[1][i];
  int engScore = x[1][i];
  english += x[1][i];

  cout << "輸入數學成績";
  cin >> x[2][i];
  int mathScore = x[2][i];
  math += x[2][i];

  cout << "輸入社會成績";
  cin >> x[3][i];
  int socScore = x[3][i];
  soc += x[3][i];

  cout << "輸入自然成績";
  cin >> x[4][i];
  int sciScore = x[4][i];
  sciense += x[4][i];

  int average = 0;
  average = (x[0][i]+x[1][i]+x[2][i]+x[3][i]+x[4][i])/5;
  cout << "student" << i+1 << "平均為"<< average << endl;
  }


  cout << "國文科總平均為" << chinese/students << endl;
  cout << "英文科總平均為" << english/students << endl;
  cout << "數學科總平均為" << math/students << endl;
  cout << "社會科總平均為" << soc/students << endl;
  cout << "自然科總平均為" << sciense/students << endl;
}
