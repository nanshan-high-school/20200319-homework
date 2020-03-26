#include <iostream>
using namespace std;

int main() {
    int chinese, english, math, society, science = 0;

    cout<<"How many people had the test?";

    int students = 0;
    cin >> students;
    int x[4][students];
    for(int i = 0; i < students; i++){
    cout<< "Please enter you Chinese score.";
    cin>> x [0][i];
    int chineseScore =x [0][i];
    chinese +=x [0][i];
 
    cout << "Please enter you English score.";
    cin >> x [1][i];
    int englishScore =x [1][i];
    english +=x [1][i];

    cout << "Please enter you Math score.";
    cin >> x [2][i];
    int mathScore =x [2][i];
    math +=x [2][i];

    cout << "Please enter you Society score.";
    cin >> x [3][i];
    int societyScore =x [3][i];
    society +=x [3][i];

    cout << "Please enter you Science score.";
    cin >> x [4][i];
    int sciScore =x [4][i];
    science +=x [4][i];

    int average = 0;
    average = (x [0][i] +x [1][i] +x [2][i] +x [3][i] +x [4][i]) / 5;
    cout << "Student " << i+1 << ":" " Average is "<< average << endl;
  }


  cout << "The average of Chinese is" << chinese/students << endl;
  cout << "The average of English is" << english/students << endl;
  cout << "The average of Math is" << math/students << endl;
  cout << "The average of Society is" << society/students << endl;
  cout << "The average of Science is" << science/students << endl;
}
