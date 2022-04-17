#include <iostream>
#include <iostream>
 
using namespace std;
 
int main()
{
   int num1 , num2;
   cin>>num1 >>num2;
   int diff = abs(num1-num2);
   if((diff==0 || diff==1)&& (num1>0||num2>0)){
       cout<<"YES";
   }else{
       cout<<"NO";
   }
 
    return 0;
}