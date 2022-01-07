#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> ws;
        getline(cin, s);
        int sum = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] >= '0' && s[i] <= '9'){
                sum += (s[i] - '0');
            }
        }
        cout << sum << "\n";
    }
}


// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;
//
// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	  string s;
// 	  cin>>s;
// 	  int total=0;
// 	  string a="";
// 	  for(int i=0;i<s.size();i++){
// 	      int num=(int)s[i];
// 	      if(num>=49 && num<=57){
// 	          total+=num-48;
// 	      }
// 	  }
// 	  cout<<total<<endl;
// 	}
// 	return 0;
// }
