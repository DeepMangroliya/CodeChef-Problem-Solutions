#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int x, a, b;
        cin >> x >> a >> b;

        cout << (a + (100 - x) * b )* 10 << "\n";
    }
}
