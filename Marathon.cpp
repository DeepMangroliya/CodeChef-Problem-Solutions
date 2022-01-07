#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int D, d, a, b, c;
        cin >> D >> d >> a >> b >> c;
        if(D * d >= 42) cout << c << "\n";
        else if(D * d >= 21) cout << b << "\n";
        else if(D * d >= 10) cout << a << "\n";
        else cout << 0 << "\n";
    }
}
