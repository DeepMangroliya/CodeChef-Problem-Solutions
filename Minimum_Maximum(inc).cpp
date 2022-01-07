#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a;
        cin >> a;
        int sum = 0;
        for(int i = 1; i < n; i++){
            int b;
            cin >> b;
            int m = min(a, b);
            a = m;
            sum += m;
        }
        cout << sum << endl;
    }
}
