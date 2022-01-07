#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        string s1, s2;
        
        if(s.length() % 2 == 0){
             s1 = s.substr(0, s.length() / 2);
             s2 = s.substr(s.length() / 2);
        }

        else{
             s1 = s.substr(0, s.length() / 2);
             s2 = s.substr(s.length() / 2 + 1);
        }
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        if(s1.compare(s2) == 0) cout << "YES\n";
        else cout << "NO\n";
    }
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         string s;
//         cin >> s;
//         string s1, s2;
//         if(s.length()%2 == 0) {
//             s1 = s.substr(0, s.length()/2);
//             s2 = s.substr(s.length()/2);
//         } else {
//             s1 = s.substr(0, s.length()/2);
//             s2 = s.substr(s.length()/2+1);
//         }
//         sort(s1.begin(), s1.end());
//         sort(s2.begin(), s2.end());
//         int i;
//         for(i = 0; i < s.length()/2; i++) {
//             if(s1[i] != s2[i]) {
//                 break;
//             }
//         }
//         if(i == s.length()/2) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }
// }

// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	string s1;
// 	cin>>s1;
// 	int count[256]={0};
// 	string s2;
// 	int h=s1.length()/2;
// 	if(s1.length()%2==0)
// 	{
// 	s2.assign(s1,0,h);
// 	s1.erase(0,h);
// 	}
// 	else
// 	{
// 	  s2.assign(s1,0,h);
// 	   s1.erase(0,h+1);	
// 	}
// 	sort(s1.begin(),s1.end());
// 	sort(s2.begin(),s2.end());
// 	if(s1.find(s2))
// 	{
// 		cout<<"NO"<<endl;
// 	}
// 	else
// 	{
// 		cout<<"YES"<<endl;
// 	}
// 	}
// 	return 0;
// }