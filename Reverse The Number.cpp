#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		int t, rev = 0;
		cin >> t;
		
		while(t != 0){
			int last = t % 10;
			rev = rev * 10 + last;
			t /= 10;
		}
		cout << rev << "\n";
	}
}
