#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int a[5], sum = 0;
        for(int j = 0; j < 5; j++){
            cin >> a[j];
            sum += a[j];
        }
        switch(sum){
            case 0: cout << "Beginner\n"; break;
            case 1: cout << "Junior Developer\n"; break;
            case 2: cout << "Middle Developer\n"; break;
            case 3: cout << "Senior Developer\n"; break;
            case 4: cout << "Hacker\n"; break;
            case 5: cout << "Jeff Dean\n"; break;
        }
    }
}
