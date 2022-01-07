#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;
        int count = 0;

        for(int i = a; i <= b; i++){
            int last = i % 10;
            if(last == 2 || last == 3 || last == 9) count++;
        }

        cout << count << endl;
    }
}
