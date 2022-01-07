#include<iostream>
using namespace std;

int main(){
    int n, count = 0;
    cin >> n;

    while(n){
        n = n/10;
        count++;
    }

    if(count == 1) cout << "1\n";
    if(count == 2) cout << "2\n";
    if(count == 3) cout << "3\n";
    if(count > 3) cout << "More than 3 digits\n";
}
