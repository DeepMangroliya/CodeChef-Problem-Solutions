#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) f(i,0,n)
#define fd(i,a,b) for(i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define vi vector< int >
#define vl vector< ll >
#define ss second
#define ff first
#define ll long long int
#define pii pair< int,int >
#define pll pair< ll,ll >
#define sz(a) a.size()
#define inf (1000*1000*1000+5)
#define all(a) a.begin(),a.end()
#define tri pair<int,pii>
#define vii vector<pii>
#define vll vector<pll>
#define viii vector<tri>
#define mod (1000*1000*1000+7)
#define pqueue priority_queue< int >
#define pdqueue priority_queue< int,vi ,greater< int > >
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    int t;
    cin >> t;

    while(t--){
        int x , y;
        cin >> x >> y;
        int j = 1, i;
        for(i = 1; i < INT_MAX; i++){
            for(j = 2; j < x + y + i; j++){
                if((x + y + i) % j == 0){
                    j = 0;
                    break;
                }
            }
            if(j != 0){
                cout << i << "\n";
                break;
            }
        }
    }
    return 0;
}
