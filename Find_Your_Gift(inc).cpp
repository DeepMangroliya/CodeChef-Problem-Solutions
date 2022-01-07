#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, x = 0, y = 0, flag = 0;
        cin >> n;
        string s;
        cin >> s;
        for(int i = 0; i < s.length(); i++){
            if(i == 0){
                if(s[i] == 'L') x--;
                else if(s[i] == 'R') x++;
                else if(s[i] == 'U') y++;
                else y--;
            }
                cout << x << " " << y << endl;
                if(s[i] == s[i + 1]){
                    flag = 1;
                    continue;
                }
                if(flag){
                    flag = 0;
                    continue;
                }
                else if(s[i] == 'L') x--;
                else if(s[i] == 'R') x++;
                else if(s[i] == 'U') y++;
                else y--;

            }
            cout << x << " " << y << "\n";
        }
}
