#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;


	while(n--){
		int t;
		cin >> t;

		int last = t % 10;
		int first = 0;
		while(t != 0){
			first = t % 10;
			t /= 10;
		}

			cout << first + last << "\n";
	}
}



//#include<iostream>
//using namespace std;
//
//int main(){
//    int t;
//    cin>>t;
//    for (int i=1;i<=t;i++)
//    {
//        int a;
//        cin>>a;
//        int j=1;
//        int ld=a%10;
//
//        while (a/j>=1)
//        {
//            j=j*10;
//        }
//        j=j/10;
//        int fd=a/j;
//        cout<<ld+fd<<"\n";
//    }
//
//}
