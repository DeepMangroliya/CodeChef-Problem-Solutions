#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        int flag = 1;

        for(int i = 0; i < s.length(); i++){
            if(s[i] != s[s.length()-i-1]){
                flag = 0;
                break;
            }
        }

        if(flag == 1) cout << "wins\n";
        else cout << "loses\n";
    }
}

// #include <iostream>
//
// int main(){
//    int t;
//    scanf("%d\n",&t);
//    while(t--){
//       int n,ans=0,rem;
//       scanf("%d",&n);
//       int i =n;
//       while(i!=0){
//          rem=i%10;
//          ans=(ans*10)+rem;
//          i/=10;
//       }if(ans==n) printf("wins\n");
//       else printf("loses\n");
//    }
// }
