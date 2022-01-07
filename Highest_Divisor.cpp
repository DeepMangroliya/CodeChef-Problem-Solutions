#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = n; i >= 1; i--){
        if(n % i == 0){
            if(i <= 10){
                cout << i;
                exit(0);
            }
        }
    }
}
