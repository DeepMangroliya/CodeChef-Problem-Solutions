#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n, flag = 0;
        cin >> n;
        if(n == 1){
            cout << "no\n";
            continue;
        }
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                flag = 1;
                break;
            }
        }
        if(flag) cout << "no\n";
        else cout << "yes\n";
    }
}
