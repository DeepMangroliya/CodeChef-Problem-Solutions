#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int n;
    cin >> n;
    getchar();
    for(int i = 0; i < n; i++){
        string s1;
        getline(cin, s1);
        int flag;
        for(int j = 0; j < s.length(); j++){
            flag = 0;
                if(s1.find(s[j]) == string::npos){
                    flag = 1;
                    break;
                }
        }
        if(!flag) cout << "YES\n";
        else cout << "NO\n";
    }
}