#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    cout << t;

    while(t--){
        int n;
        cin >> n;
        cout << n << endl;
        for(int i = 0; i < 2; i++){
            int a[3], b[3];
            for(int j = 0; j < n; j++){
                cin >> a[j];
            }
            for(int j = 0; j < n; j++){
                cin >> b[j];
            }
            int count = 0;
            for(int j = 1; j <= n; j++){
                if((j == 1) && (a[j - 1] >= b[j - 1])){
                    count++;
                }
                else{
                    int time = a[j - 1] - a[j];
                    if(time >= b[j]){
                        count++;
                    }
                }
            }
            cout << count << "\n";
        }
    }
}
