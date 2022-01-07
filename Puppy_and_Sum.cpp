#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int d, n, sum;
        cin >> d >> n;
        while(d){
            sum = 0;
            while(n){
                sum += n;
                n--;
            }
            n = sum;
            d--;
        }
        cout << sum << "\n";
    }
}


// int main() {
//     int T;
//     cin>>T;
//
//     while(T--)
//     {
//         int D,n;
//         cin>>D>>n;
//
//         for(int i=1;i<=D;i++)
//         {
//             n= (n*(n+1))/2;
//         }
//         cout<<n<<endl;
//     }
// 	// your code goes here
// 	return 0;
// }
