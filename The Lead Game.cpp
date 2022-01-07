#include<iostream>
#include<limits>
using namespace std;

int main(){
	int n, current = 0, max = INT_MIN ;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		int a, b, round = 0;
		cin >> a >> b;
		round = a > b ? a - b :b - a;
		if(a > b){
			round = a - b;
			if(round > max){
				max = round;
				current = 1;
			}
		}
		else{
			round = b - a;
			if(round > max){
				max = round;
				current = 2;
			} 
		}
		cout << max <<" "<< current << endl;
	}
	
	cout << current << " " << max;
}
