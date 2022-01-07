#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        int group = 0;
        for(int i = 0; i < s.length(); i++){
            int countone = 0;
            int j = 0;
                while(s[j] != '0'){
                    countone++;
                    i = j;
                    j++;
                }
            if(countone != 0) group++;
        }
        cout << group << "\n";
    }
}
