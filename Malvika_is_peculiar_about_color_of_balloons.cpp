#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        int a = 0, b = 0;
        for(int i = 0; i < s.length(); i++){
              if(s.at(i) == 'a') a++;
              else b++;
        }
        if(a <= b) cout << a << "\n";
        else cout << b << "\n";
    }
}
