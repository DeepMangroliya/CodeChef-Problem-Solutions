#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int a[3], n = 0;
        while(n != 3){
            cin >> a[n];
            n++;
        }

        sort(a, a + 3);
        if(a[1] == a[2]){
            cout << a[0] << "\n";
        }
        else{
            cout << a[1] << "\n";
        }
    }
}
