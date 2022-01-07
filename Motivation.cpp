#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, x;
        cin >> n >> x;
        int max = 0;
        while(n--){
            int s, r;
            cin >> s >> r;
            if(s <= x && r >= max){
                max = r;
            }
        }
        cout << max << "\n";
    }
}
