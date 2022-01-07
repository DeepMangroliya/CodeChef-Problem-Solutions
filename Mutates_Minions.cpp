#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k, count = 0;
        cin >> n >> k;

        while(n--){
            int a;
            cin >> a;
            if((a + k) % 7 == 0) count++;
        }
        cout << count << "\n";
    }
}
