#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        char* s = {};
        for(int i = 0; i < n; i++){
            getline(cin, s+i);
        }
        for(int i = 0; i < n; i++){
            string s1 = s[i].substr(s[i].begin(),);
            for(int j = 0; j < n; i++){
                if(j == i) continue;
                else{
                    if(s1[i] == s[j]){
                        cout << s[i] << "\n";
                    }
                    else{
                        cout << s1[i] << "\n";
                    }
                }
            }
        }
    }
}
