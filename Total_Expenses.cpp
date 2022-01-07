#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int t;
    cin >> t;
     for(int i = 0; i < t; i++){
        int q;
        float p;
        cin >> q >> p;
        if(q <= 1000){
            printf("%0.6f\n", q * p);
        }
        else{
            printf("%0.6f\n", q * p * (1 - 0.1));
        }
     }
}
