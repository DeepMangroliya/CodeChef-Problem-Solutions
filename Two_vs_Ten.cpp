#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        if(n % 5 == 0){
            int count = 0;
            while(n % 10 != 0){
                n *= 2;
                count++;
            }
            cout << count << "\n";
        }
        else{
            cout << -1 << "\n";
        }
    }
}