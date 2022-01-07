#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int h, te;
        float c;
        cin >> h >> c >> te;
        if(h > 50 && c < 0.7 && te > 5600) cout << 10 << "\n";
        else if(h > 50 && c < 0.7) cout << 9 << "\n";
        else if(c < 0.7 && te > 5600) cout << 8 << "\n";
        else if(h > 50 && te > 5600) cout << 7 << "\n";
        else if(h > 50 || c < 0.7 || te > 5600) cout << 6 << "\n";
        else cout << 5 << "\n";
    }
}
