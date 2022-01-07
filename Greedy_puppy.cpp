// #include<iostream>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     while(t--){
//         int n, k;
//         cin >> n >> k;
//         if(n < k)
//             cout << k % n << "\n";
//         else
//             cout << k % n - 1 << "\n";
//     }
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int t,n,k,instanceMax,maxx=0;
//     cin>>t;
//     while(t--){
//         cin>>n>>k;
//         maxx=0;
//         for(int i=1;i<=k;i++){
//             instanceMax = n%i;
//             if(instanceMax > maxx){
//                 maxx = instanceMax;
//             }
//         }
//         cout<<maxx<<endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        int maxx = 0;

        for(int i = 1; i <= k; i++){
            int max = n % i;
            
            if(max > maxx){
                maxx = max;
            }
        }
        cout << maxx << "\n";
    }
}