#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        int flag = 0;

        for(int i = 0; i < s.length(); i++){
            for(int j = i + 1; j < s.length(); j++)
            if(s.at(i) == s.at(j)){
                flag = 1;
                break;
            }
            if(flag) break;
        }
        if(flag) cout << "NO\n";
        else cout << "YES\n";
    }
}
