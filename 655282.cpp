#include <iostream>
using namespace std;

int main() {
  int p;
  cin >> p;

  int sco[p][5];

  for (int n = 0; n < p; n++) {
    for (int m = 0; m < 5; m++) {
      cin >> sco[n][m];
    }
  }

  int saverage[5];
  int paverage[p];
  
  float average = 0;
  for (int n = 0; n < 5; n++) {
    for (int m = 0; m < p; m++) {
      average += sco[m][n];
    }
    cout << n + 1 << " score average = " << average / p << "\n";
    average = 0;
  }

  for (int n = 0; n < p; n++) {
    for (int m = 0; m < 5; m++) {
      average += sco[n][m];
    }
    cout << n + 1 << " personal average = " << average / 5 << "\n";
    average = 0;
  }
  
  
}
