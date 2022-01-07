#include<iostream>
using namespace std;

int main(){

  short t;
  cin>>t;

  short arr1[t],arr2[t];

  for(int i=0;i<t;i++){
    short a,b;
    cin>>a;
    cin>>b;
    arr1[i]=a;
    arr2[i]=b;
  }
  for(int i=0;i<t;i++){
    cout<<arr1[i]%arr2[i]<<"\n";
  }
  return 0;
}
