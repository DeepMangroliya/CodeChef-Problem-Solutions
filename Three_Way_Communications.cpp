#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int r;
        cin >> r;
        int a[3][2] = {};
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 2; j++){
                cin >> a[i][j];
            }
        }


        if((pow((a[1][0] - a[2][0]), 2) + pow((a[1][1] - a[2][1]), 2)) <= r && (pow((a[0][0] - a[1][0]), 2) + pow((a[0][1] - a[1][0]), 2)) <= r && (pow((a[1][0] - a[2][0]), 2) + pow((a[1][1] - a[2][1]), 2)) <= r)
            cout << "yes\n";
        else
            cout << "no\n";
    }
}
