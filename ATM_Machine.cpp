#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;
        while(n--){
            int a;
            cin >> a;
            if(k >= a){
                k -= a;
                cout << 1;
                continue;
            }
            else{
                cout << 0;
            }
        }
        cout << "\n";
    }
}
