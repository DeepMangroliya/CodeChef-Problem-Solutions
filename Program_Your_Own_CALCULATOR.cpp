#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float a, b;
    char c;
    cin >> a >> b >> c;

    switch(c){
        case '+' : cout << fixed << setprecision(6) << a + b; break;
        case '-' : cout << fixed << setprecision(6) << a - b; break;
        case '*' : cout << fixed << setprecision(6) << a * b; break;
        case '/' : cout << fixed << setprecision(6) << a / b; break;
    }
    
}