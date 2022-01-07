#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int a[n], fr = n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        for(int i = 0; i < n; i++){
            cout << i << endl;
            int count = 0;
            for(int j = i + 1; j < n; j++){
                if(a[i] == a[j]){
                    count++;
                    i = j;
                }
            }
            fr = fr - count;
        }
        cout << fr << "\n";
    }
}



// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// int main() {
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// int t;
// cin>>t;
// while(t--){
//  int n;
//  cin>>n;
//     set <int> s;
//     int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//             s.insert(arr[i]);
//         }
//     int ans=s.size();
//     cout<<ans<<endl;
//     }
//     return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;
//
// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    int n;
// 	    cin>>n;
// 	    int a[n];
//
// 	    for(int i=0;i<n;i++)
// 	    {
// 	            cin>>a[i];
// 	    }
// 	    int c=1;
// 	    sort(a,a+n);
// 	    for(int i=0;i<n-1;i++)
// 	    {
// 	        if(a[i]!=a[i+1])
//                 c++;
//
// 	    }
// 	                cout<<c<<endl;
//
//
// 	}
// 	return 0;
// }









//
// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <map>
// #include <string>
// #include <cmath>
//
//
//
//
//
// // New Imports:-
//
//
//
//
//
// using namespace std;
//
//
//
//
//
// // Definitions
//
//
// #define ll long long
//
//
// #ifdef TESTING
// #define DEBUG fprintf(stderr, "====TESTING====\n")
// #define VALUE(x) cerr << "The value of " << #x << " is " << x << endl
// #define debug(...) fprintf(stderr, __VA_ARGS__)
// #else
// #define DEBUG
// #define VALUE(x)
// #define debug(...)
// #endif
//
// #define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
// #define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
// #define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
// #define FORSQ(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a))
// #define FORC(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))
// #define FOREACH(a, b) for (auto&(a) : (b))
// #define REP(i, n) FOR(i, 0, n)
// #define REPN(i, n) FORN(i, 1, n)
// #define MAX(a, b) a = max(a, b)
// #define MIN(a, b) a = min(a, b)
// #define SQR(x) ((LL)(x) * (x))
// #define RESET(a, b) memset(a, b, sizeof(a))
// #define fi first
// #define se second
// #define mp make_pair
// #define pb push_back
// #define ALL(v) v.begin(), v.end()
// #define ALLA(arr, sz) arr, arr + sz
// #define SIZE(v) (int)v.size()
// #define SORT(v) sort(ALL(v))
// #define REVERSE(v) reverse(ALL(v))
// #define SORTA(arr, sz) sort(ALLA(arr, sz))
// #define REVERSEA(arr, sz) reverse(ALLA(arr, sz))
// #define PERNUTE next_permutation
// #define test(t) while (t--)
//
//
//
// /*
// Tutorial:-
//
// 1. Comment - //
//
// 2. string var
// 	var[]
// 	var.substr(start,length)
// 	var.length()
// 	var.erase(start,length)
//
// 3. vector<type> var;
// 	var.size()
// 	var[]
// 	var.erase(var.begin()+i;var.end()-)
//
// 4. Functions:-
// 	return-type function-name(arguments..){
// 		......
// 		......
// 		........
//
// 		}
//
// 5. for(start,end,increment){
//
// 	}
//
// 6. while (condition){
//
//
// 	}
//
// 7. if (condition){
// 		.......
// 		}
//
// 	else if (condition){
// 		......
// 		}
//
// 	else{
// 		.....
// 		}
//
//
// 8. cout << data
//
// 9. cin >> var
//
// 10. Variables:-
//
// 	type var
// 	var=data;
// 	get -> var
//
//
//
// */
//
//
//
//
// // Code....
//
//
//
//
//
// /* Functions:-
//
//
//
// int func(){
//
//
// 	}
//
//
// string func(){
//
//
// 	}
//
//
//
// */
//
//
//
//
//
//
// int main(){
//
//
// 	// Fast Code Helper
//
// ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//
//
//
//     // Code
//
//
//     int t;
//
//     cin>>t;
//
//     while(t--){
//
//
//     	int n,r=0;
//
//     	cin>>n;
//
//     vector<int> arr;
//
//
//     	for(int i=0;i<n;i++){
//
//     	    int a;
//
//     	    cin>>a;
//
//    if (count(arr.begin(),arr.end(),a)==0) r++;
//   arr.push_back(a);
//
//
//     	}
//
//
//
//     cout<<r<<'\n';
//
//     }
//
//
//
//
//
//
// 	return 0;
//
//
// }
