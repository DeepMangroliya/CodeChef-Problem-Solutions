#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int sal;
        float gross = 0;
        cin >> sal;

        if(sal < 1500){
            printf("%0.2f\n", (float) sal + sal * 0.1 + sal * 0.9);
        }
        else{
            printf("%0.2f\n", (float) sal + 500 + sal * 0.98);
        }
    }
}
