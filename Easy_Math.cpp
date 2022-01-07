#include<iostream>
#include<climits>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int max = INT_MIN;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                int num = a[i] * a[j];
                int sum = 0;
                while(num != 0){
                    int last = num % 10;
                    sum  += last;
                    num /= 10;
                }
                if(sum > max) max = sum;
            }
        }
        cout << max << "\n";
    }
}
