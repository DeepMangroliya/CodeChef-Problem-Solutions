#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        float a, b, x;
        cin >> a >> b >> x;
        int z = ceil((b-a)/x);
        cout << z << "\n";
    }
}