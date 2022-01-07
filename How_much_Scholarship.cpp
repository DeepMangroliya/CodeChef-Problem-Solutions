#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n > 100) cout << 0;
    else if(n <= 100 && n >= 51) cout << 50;
    else cout << 100;
}
