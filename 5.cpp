#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        unsigned long long int a, b;
        cin >> a >> b;
        if(((double)a/b) <= 0.5) cout << "Yes\n";
        else cout << "No\n"; 
    }
}