#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
  int num;
  int oddCounter=0;
  int evenCounter=0;
  int posCounter=0;
  int negCounter=0;
  cin>>num;
  for(int i=0;i<num;i++){
      int x ;
      cin>>x;
      if(x%2==0){
          evenCounter++;
      }else{
          oddCounter++;
      }
      if(x>0){
          posCounter++;
      }else if(x<0){
          negCounter++;
      }
  }
  cout<<"Even: "<<evenCounter<<endl<<"Odd: "<<oddCounter<<endl<<"Positive: "<<posCounter<<endl<<"Negative: "<<negCounter;
  
 
    return 0;
}