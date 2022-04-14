#include <iostream>
#include <string> 
 
using namespace std;
 
int main()
{
  long long  num1,num2,num3,num4;
  cin >>num1 >>num2 >>num3>>num4;
  long long multip = ((num1%100)*(num2%100)*(num3%100)*(num4%100))%100;
  if(multip<10){
  cout<<0<<multip;
      
  }else{
      cout<<multip;
  }
 
    return 0;
}