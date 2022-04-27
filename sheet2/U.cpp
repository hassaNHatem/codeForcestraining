#include <iostream>
 
using namespace std;
 
int
main ()
{
 int num,num2,num3;
 cin>>num>>num2>>num3;
 int sum = 0;
  int digitsum =0;
  for(int i=1;i<=num;i++){
      int number = i;
    
     
      while(number!=0){
            int currentDigit = number%10;
          digitsum+=currentDigit;
          number = number/10;
      }
      
      if(digitsum>=num2 &&digitsum<=num3){
        //   cout<<i<<" ";
          sum+=i;
      }
      digitsum=0;
  }
  cout<<sum;
  return 0;
}