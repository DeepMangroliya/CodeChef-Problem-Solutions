// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n, current = 0, max = INT_MIN ;
// 	cin >> n;

// 	for(int i = 0; i < n; i++){
// 		int a, b, round = 0;
// 		cin >> a >> b;
// 		round = a > b ? a - b : b - a;
// 		if(round > max){
// 			max = round;
// 			if(a > b)
// 				current = 1;
// 			else
// 				current = 2;
// 		}
// 	}

// 	cout << current << " " << max;
// }


#include<iostream>
#include<climits>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	int max = INT_MIN, win = 0, a = 0, b = 0, m, n;
	
	for(int i = 0; i < t; i++){
		cin >> m >> n;
		a+=m;
		b+=n;
		if(max <= abs(a - b)){
			max = abs(a - b);
			if(a >= b) win = 1;
			else win = 2;
		}
	}

	cout << win << " " << max;
}