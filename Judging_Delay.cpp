#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, count = 0;
        cin >> n;

        while(n--){
            int a, b;
            cin >> a >> b;

            if(b - a > 5) count++;
        }

        cout << count << "\n";
    }
}
