#include <iostream>
using namespace std;
int main() {
    int i=0;
    int p=0;
    float a[7] = {0};
    cout << "請輸入本次報考人數: ";
    cin >> p;
    float s[p][8];
        for( i=1; i<=p; i++){
            cout << "請輸入國文成績: "; 
            cin >> s[i][1];
            cout << "請輸入英文成績: ";
            cin >> s[i][2];
            cout << "請輸入數學成績: ";
            cin >> s[i][3];
            cout << "請輸入自然成績: ";
            cin >> s[i][4];
            cout << "請輸入社會成績: ";
            cin >> s[i][5];
            s[i][6] = ( s[i][1] + s[i][2] + s[i][3] + s[i][4]+ s[i][5] );
            s[i][7] = ( s[i][1] + s[i][2] + s[i][3] + s[i][4]+ s[i][5] ) / 5;
            cout << "個人總分=" << s[i][6] << "分\n";
            cout << "個人平均=" << s[i][7] << "分\n\n";
        if (i == p ){
            for(int j=1 ; j<=p ;j++){
                a[1] = a[1] + s[j][1];
                a[2] = a[2] + s[j][2];
                a[3] = a[3] + s[j][3];
                a[4] = a[4] + s[j][4];
                a[5] = a[5] + s[j][5];
                a[6] = a[6] + s[j][6];
            }
        }
    }
    cout << "各科總分:\n";
    cout << "國文=" << a[1] << "分\n";
    cout << "英文=" << a[2] << "分\n";
    cout << "數學=" << a[3] << "分\n";
    cout << "自然=" << a[4] << "分\n";
    cout << "社會=" << a[5] << "分\n";
    cout << "五科總分=" << a[6] << "分\n\n";

    cout << "各科總平均:\n";
    cout << "國文=" << a[1]/p << "分\n";
    cout << "英文=" << a[2]/p << "分\n";
    cout << "數學=" << a[3]/p << "分\n";
    cout << "自然=" << a[4]/p << "分\n";
    cout << "社會=" << a[5]/p << "分\n";
    cout << "五科總平均=" << a[6]/(p*5) << "分\n";
    }
