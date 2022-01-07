#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        char x;
        cin >> x;

        switch(x){
            case 'b': case 'B':
            cout << "BattleShip\n"; break;
            case 'c': case 'C':
            cout << "Cruiser\n"; break;
            case 'd': case 'D':
            cout << "Destroyer\n"; break;
            case 'f': case 'F':
            cout << "Frigate\n"; break;
        }
    }
}
