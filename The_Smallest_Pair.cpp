#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n, min = INT_MAX;
        cin  >> n;
        int a[n] = {};
        for(int j = 0; j < n; j++){
            cin >> a[j];
        }
        if(n<=100){
            for(int j = 0; j < n; j++){
                for(int k = j + 1; k < n; k++){
                    if(a[k] + a[j] < min) min = a[k] + a[j];
                }
            }
            cout << min << "\n";
        }
        else{
            sort(a, a + n);
            cout << a[0] << a[1] << "\n";
        }
    }
}

// #include <bits/stdc++.h>
// using namespace std;
//
// int main()
// {
//     int T;
//     cin>>T;
//     for(int i=0;i<T;i++)
//     {
//         int N;
//         cin>>N;
//         int Arr[N];
//         for(int i=0;i<N;i++)
//         {
//             cin>>Arr[i];
//         }
//         sort(Arr,Arr+N);
//         cout<<Arr[0]+Arr[1]<<endl;
//
//     }
//     return 0;
// }
