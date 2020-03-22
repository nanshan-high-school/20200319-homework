#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "how many student?";
    cin >> num;
    
    int grade[num][5];
    for (int i = 0; i < num; i++) {
        float avg = 0;
        
        for (int j = 0; j < 5; j++) {
            cout << "grade:";
            cin >> grade[i][j];
            
            avg += grade[i][j];
            cout << endl;
        }

        avg /= 5;
        cout << "student" << i + 1 << "'s avg" << ":" << avg;
        cout << endl;
    }
    
    for (int j = 0; j < 5; j++) {
    	float avg = 0;
        int total = 0;
        for (int i = 0; i < num; i++) {
            total += grade[i][j];
            if (i == num - 1) {
                avg = total;
                avg /= num; 
                cout << "subject's avg:" << avg;
                cout << endl;
            }
        }        
	}
}
