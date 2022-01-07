#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, count = 0;
        cin >> n;
        while(n != 0){
            if(n >= 100) n -= 100;
            else if(n >= 50) n -= 50;
            else if(n >= 10) n -= 10;
            else if(n >= 5) n -= 5;
            else if(n >= 2) n -= 2;
            else n--;
            count++;
        }
        cout << count << "\n";
    }
}
