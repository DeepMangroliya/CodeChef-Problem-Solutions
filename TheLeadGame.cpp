#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, current = 0, max = -99999999;
	cin >> n;

	for(int i = 0; i < n; i++){
		int a, b, round = 0;
		cin >> a >> b;
		round = a > b ? a - b : b - a;
		if(round > max){
			max = round;
			if(a > b)
				current = 1;
			else
				current = 2;
		}

		cout << max <<" "<< current << endl;
	}

	cout << current << " " << max;
}
