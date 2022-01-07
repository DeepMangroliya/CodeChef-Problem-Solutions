#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n, k;
        cin >> n >> k;
        int p, loss = 0;
        while(n--){
            cin >> p;
            if(p > k){
                loss += p - k;
            }
        }
        cout << loss << "\n";
    }
}
