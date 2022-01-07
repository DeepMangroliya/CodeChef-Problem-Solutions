#include<iostream>
using namespace std;

int main(){

  int x;
  float y;
  scanf("%d %f",&x,&y);

  if(y>x+0.5){
    if(x%5==0)
    printf("%0.2f\n",(y-x-0.5));
    else
    printf("%0.2f\n",y);
  }
  else
    printf("%0.2f\n",y);
    return 0;
}
