#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int b, ans = 0;
        cin >> b;

        while(b / 2 > 0){
            ans += (b-2) / 2;
            b -= 2;
        }
        cout << ans << "\n";
    }
}
