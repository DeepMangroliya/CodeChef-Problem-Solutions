#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n, count = 0;
        cin >> n;
        while(n != 0){
            int z = sqrt(n);
            n -= z * z;
            count++;
        }
        cout << count << "\n";
    }
}
