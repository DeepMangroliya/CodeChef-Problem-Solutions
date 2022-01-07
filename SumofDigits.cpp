#include<iostream>
using namespace std;

int main(){
  int n, sum = 0;
  cin >> n;
  for(int i = 0; i < n; i++){
    int t;
    cin >> t;
    while(t != 0){
      int last = t % 10;
      sum += last;
      t /= 10;
    }
    cout << sum << "\n";
  }


}
