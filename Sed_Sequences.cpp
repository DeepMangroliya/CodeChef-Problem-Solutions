#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n, k;
        cin >> n >> k;
        int a[n], sum = 0 , count = 0;
        for(int j = 0; j < n; j++){
            cin >> a[j];
            sum += a[j];
        }
        while(sum % k != 0){
            int z = sum % k;
            sum -= z;
            count ++;
        }

        cout << count << "\n";
    }
}
