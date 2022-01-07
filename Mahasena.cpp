#include<iostream>
using namespace std;

int main(){
    int t, count = 0;
    cin >> t;
    int z = t;
    while(t--){
        int n;
        cin >> n;
        if(n % 2 == 0) count++;
    }

    if(z - count < count) cout << "READY FOR BATTLE\n";
    else cout << "NOT READY\n";
}
