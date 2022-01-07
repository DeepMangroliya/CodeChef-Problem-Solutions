#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int t;
//     cin >> t;
//
//     for(int i = 0; i < t; i++){
//         int n, k;
//         cin >> n >> k;
//         int a[n] = {};
//         while(k > 0){
//             for(int i = 0; i < n; i++){
//                 a[i]++;
//                 k--;
//                 if(k <= 0){
//                     break;
//                 }
//             }
//         }
//         sort(a, a+n);
//         cout << a[0] << "\n";
//     }
// }



// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n, k, count = 0;
//         cin >> n >> k;
//
//         while(k > 0){
//             count++;
//             k -= n;
//             if(k < n){
//                 k -= n;
//                 break;
//             }
//         }
//         cout << count << "\n";
//     }
// }

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, count = 0;
        cin >> n >> k;
        cout << k/n << "\n";
    }
}
