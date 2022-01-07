#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        for(int i = 1; i <= n; i++){
            int flag = 0;
            for(int j = i; j < n; j++){
                if(a[i - 1] == a[j]){
                    flag = 1;
                    i++;
                    break;
                }
            }
            if(!flag){
                cout << a[i - 1] << "\n";
                break;
            }
        }
    }
}




// #include <iostream>
// using namespace std;
//
// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
// 	 //   int p=n/2+2;
// 	   // int arr1[n];
// 	    int arr[100001]={0};
//
// 	while(n--){
// 	        int m;
// 	        cin>>m;
// 	        arr[m]++;
// 	    }
// 	    for(int i=0;i<100001;i++){
// 	        if(arr[i]%2==1){
// 	            cout<<i<<endl;
// 	            break;
// 	        }
// 	    }
//
//
// 	}
// 	return 0;
// }
