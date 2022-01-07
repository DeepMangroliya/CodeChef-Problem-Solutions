// #include <bits/stdc++.h>
// using namespace std;
// #define f(i,a,b) for(i=a;i<b;i++)
// #define rep(i,n) f(i,0,n)
// #define fd(i,a,b) for(i=a;i>=b;i--)
// #define pb push_back
// #define mp make_pair
// #define vi vector< int >
// #define vl vector< ll >
// #define ss second
// #define ff first
// #define ll long long int
// #define pii pair< int,int >
// #define pll pair< ll,ll >
// #define sz(a) a.size()
// #define inf (1000*1000*1000+5)
// #define all(a) a.begin(),a.end()
// #define tri pair<int,pii>
// #define vii vector<pii>
// #define vll vector<pll>
// #define viii vector<tri>
// #define mod (1000*1000*1000+7)
// #define pqueue priority_queue< int >
// #define pdqueue priority_queue< int,vi ,greater< int > >
// #define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int a, b;
//         long long int gcd = 1, lcm = 1;
//         cin >> a >> b;
//         int m = min(a, b);
//         int a1 = a, b1 = b;
//         for(int i = 2; i < m; i++){
//             while((a % i == 0) && (b % i == 0)){
//                     a /= i;
//                     b /= i;
//                     gcd *= i;
//             }
//         }
//
//         lcm = ((a1 * b1) / gcd);
//
//         cout << gcd << " " << lcm << "\n";
//     }
//
//     return 0;
// }
#include<iostream>
using namespace std;

long long gcd(long long a , long long b)
{
		if(a==0)
			return b;

		return gcd(b%a , a);

}


int main()
{

		long long t;
		scanf("%lld",&t);

		while(t--)
		{
			long long a,b,k;

			scanf("%lld%lld",&a,&b);

			k=gcd(a,b);

			printf("%lld %lld\n",k,(a*b)/k);

		}

		return 0;
}
