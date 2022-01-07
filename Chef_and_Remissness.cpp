#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;
        int min = a >= b ? a : b;
        cout << min << " " << a+b << "\n";
    }
}
