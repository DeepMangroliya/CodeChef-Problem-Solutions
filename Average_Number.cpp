#include<iostream>
#include<climits>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k, v;
        cin >> n >> k >> v;

        int sum = 0;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            sum += a;
        }
        for(int i = 1; i < INT_MAX; i++){   
            if(sum > ((n + k) * v)){
                cout << -1 << "\n";
                break;
            }
            sum += i + i + i;
            if((sum / (n + k) == v) ){
                cout << i << "\n";
                break;
            }
            sum -= (i + i + i);
        }   
    }
}