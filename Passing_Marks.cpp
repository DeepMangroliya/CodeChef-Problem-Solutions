#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, am, bm, cm, b, c, t, total = 0;
        cin >> am >> bm >> cm >> t >> a >> b >> c;
        if((a >= am && b >= bm && c >= cm) && t <= a + b + c) cout << "YES\n";
        else cout << "NO\n";
    }
}
