#include <iostream>
using namespace std;

int main() {
  int chinesesum = 0;
  int englishsum = 0;
  int mathsum = 0;
  int socsum = 0;
  int sciencesum = 0;

  cout<<"請輸入多少人考學測";
  
  int candidate = 0;
  cin >> candidate;
  int x[5][candidate];
  for(int i = 0;i < candidate;i++){
  cout<<"輸入國文成績";
  cin>>x[0][i];
  int chiScore =x[0][i];
  chinesesum += x[0][i];

  cout << "輸入英文成績";
  cin >> x[1][i];
  int engScore = x[1][i];
  englishsum += x[1][i];

  cout << "輸入數學成績";
  cin >> x[2][i];
  int mathScore = x[2][i];
  mathsum += x[2][i];

  cout << "輸入社會成績";
  cin >> x[3][i];
  int socScore = x[3][i];
  socsum += x[3][i];

  cout << "輸入自然成績";
  cin >> x[4][i];
  int sciScore = x[4][i];
  sciencesum += x[4][i];

  int average = 0;
  average = (x[0][i]+x[1][i]+x[2][i]+x[3][i]+x[4][i])/5;
  cout << "student" << i+1 << "平均為"<< average << endl;
  }


  cout << "國文總平均為" << chinesesum/candidate << endl;
  cout << "英文總平均為" << englishsum/candidate << endl;
  cout << "數學總平均為" << mathsum/candidate << endl;
  cout << "社會總平均為" << socsum/candidate << endl;
  cout << "自然總平均為" << sciencesum/candidate << endl;
}
