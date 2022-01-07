#include<iostream>
#include "boost/multiprecision/cpp_int.hpp"
using namespace boost::multiprecision;
using namespace std;

int main(){
	int t;
	cin >> t;
	cpp_int fact;

	for(int i = 0; i < t; i++){
		int n;
		cin >> n;
		fact = 1;

        while(n > 0){
            fact *= n;
            n--;
        }

        cout << fact << "\n";
    }
}
