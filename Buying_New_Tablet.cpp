#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, b;
        cin >> n >> b;
        int max = 0;
        while(n--){
            int w, h, p;
            cin >> w >> h >> p;
            if(p <= b && w * h > max){
                max = w * h;
            }
        }
        if(max != 0)
            cout << max << "\n";
        else
            cout << "no tablet\n";
    }
}
