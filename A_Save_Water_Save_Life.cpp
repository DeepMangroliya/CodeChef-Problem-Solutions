#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int h, x, y, c;
        cin >> h >> x >> y >> c;

        if(h * (x + floor(y/2)) <= c)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
