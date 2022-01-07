#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a[3];
        cin >> a[0];
        cin >> a[1];
        cin >> a[2];

        sort(a, a + 3);

        if(a[0] + a[1] == a[2]) cout << "yes\n";
        else cout << "no\n";

    }
}


// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int x, y, z;
//         cin >> x >> y >> z;
//         if(z==-y-x||z==y+x||z==y-x||z==-y+x){
//             cout << "yes" << endl;
//         }
//         else{
//             cout << "no" << endl;
//         }
//     }
// }



// int main(){
//     ll tc;cin>>tc;
//     while(tc--){
//         ll x,y,z;cin>>x>>y>>z;
//         if((x+y==z) or (y+z==x) or (x+z==y))
//             cout<<"yes"<<endl;
//         else
//             cout<<"no"<<endl;
//
//
//
//     }
//     return 0;
// }
