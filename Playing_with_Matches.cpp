#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int a, b, sum = 0;
        cin >> a >> b;
        int n = a + b;
        while(n != 0){
            int last = n % 10;
            n /= 10;
            if(last == 3 || last == 5 || last == 2) sum += 5;
            else if(last == 0 || last == 9 || last == 6) sum += 6;
            else if(last == 1) sum += 2;
            else if(last == 7) sum += 3;
            else if(last == 4) sum += 4;
            else sum += 7;
        }
        cout << sum << "\n";
    }
}


// #include <bits/stdc++.h>
// using namespace std;
//
// int t, a, b;
//
// int main() {
//   cin >> t;
//   while(t--) {
//     cin >> a >> b;
//     int arr[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
//     int sum = a + b, ans = 0;
//     while(sum > 0) {
//       int i = sum % 10;
//       ans = ans + arr[i];
//       sum = sum / 10;
//     }
//     cout << ans << endl;
//   }
//   return 0;
// }
