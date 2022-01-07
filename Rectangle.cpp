#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a[4];
        for(int i = 0; i < 4; i++){
            cin >> a[i];
        }
        
        sort(a, a + 4);
        int count = 0;
        for(int i = 0; i < 4; i++){
            for(int j = i + 1; j < 4; j++)
            if(a[i] == a[j]){
                count++;
                i++;
                break;
            }
        }

        if(count == 2) cout << "YES\n";
        else cout << "NO\n";
        
    }   
}