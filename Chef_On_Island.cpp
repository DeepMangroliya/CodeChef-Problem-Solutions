#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int x, y, xr, yr, d;
        cin >> x >> y >> xr >> yr >> d;
        while(d--){
            x -= xr;
            y -= yr;
        }
        if(x>=0 && y>=0) cout << "YES\n";
        else cout << "NO\n";
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
// 	    int x,y,a,b,d;
// 	    cin>>x>>y>>a>>b>>d;
// 	    if(x/a>=d && y/b>=d){
// 	        cout<<"Yes"<<endl;
// 	    }
// 	    else{
// 	        cout<<"No"<<endl;
// 	    }
// 	}
// 	return 0;
// }

// #include <stdio.h>
//
// int main() {
// 	// your code goes here
// 	int t;
// 	scanf("%d\n",&t);
// 	while(t--)
// 	{
// 	    int a,b,c,d,e,min=0,s;
// 	    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
//
//          if(a<c*e || b<d*e)
//          {
//              printf("NO\n");
//          }
//          else
//          {
//              printf("YES\n");
//          }
// 	}
// 	return 0;
// }
