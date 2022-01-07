#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		int t;
		cin >> t;
		int c = 0;
		while(t != 0){
			int last = t % 10;
			t /= 10;
			if(last == 4) c++;
		}
		cout << c << "\n";
	}
}
