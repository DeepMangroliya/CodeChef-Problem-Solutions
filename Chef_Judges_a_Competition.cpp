#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, suma = 0, sumb = 0;
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < n; j++){
                if(i == 0){
                    cin  >> a[j];
                    suma += a[j];
                }
                else{
                    cin >> b[j];
                    sumb += b[j];
                }
            }
        }

        sort(a, a + n);
        sort(b, b + n);
        if(suma - a[n - 1] < sumb - b[n - 1]) cout << "Alice\n";
        else if(suma - a[n - 1] > sumb - b[n - 1]) cout << "Bob\n";
        else cout << "Draw\n";

    }
}


// #include <iostream>
// #include <algorithm>
// using namespace std;
//
// int main() {
// 	int t; cin>>t;
// 	while(t--){
// 	    int n; cin>>n;
// 	    int A[n] , B[n];
// 	    for(int i=0 ; i<n; i++){
// 	        cin>>A[i];
// 	    }
// 	    for(int i=0 ; i<n; i++){
// 	        cin>>B[i];
// 	    }
// 	    int m1 = *max_element(A , A+n);
// 	    int m2 = *max_element(B , B+n);
// 	    int s1 = 0, s2 = 0;
// 	    for(int i=0; i<n ; i++){
// 	        s1 += A[i];
// 	        s2 += B[i];
// 	    }
// 	    s1 = s1 - m1;
// 	    s2 = s2 - m2;
// 	    if(s1>s2){
// 	        cout<<"Bob"<<endl;
// 	    }
// 	    else if(s2>s1){
// 	        cout<<"Alice"<<endl;
// 	    }
// 	    else{
// 	        cout<<"Draw"<<endl;
// 	    }
// 	}
// 	return 0;
// }
