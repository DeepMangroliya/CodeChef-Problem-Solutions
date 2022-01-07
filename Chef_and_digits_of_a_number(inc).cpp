#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int c0 = 0, c1 = 0;
        while(n != 0){
            int last = n % 10;
            if(last == 0) c0++;
            if(last == 1) c1++;
            n /= 10;
            cout << n << endl;
            cout << c0 << " " << c1 << endl;
        }
        if((c1 == 1) || (c0 == 1)) cout << "Yes\n";
        else cout << "No\n";
    }
}
