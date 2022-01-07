#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        int A = 0, B = 0;
        if(s.length() == 2){
            if(s.at(0) != s.at(1))
                cout << "yes\n";
            else
                cout << "no\n";
            continue;
        }

        for(int i = 0; i < s.length() / 2; i++){//error
            if(s.at(i) == 'A') A++;
            else B++;
        }

        if(A != B) cout << "no\n";
        else cout << "yes\n";
    }
}
