#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        int max = INT_MIN;

        for(char i = 'a'; i < 'z'; i++){
            int count = 0;
            for(int j = 0; j < s.length(); j++){
                if(s.at(j) == i)
                    count++;
            }
            if(count > max)
                max = count;
        }

        if(max == s.length() - max)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

}
