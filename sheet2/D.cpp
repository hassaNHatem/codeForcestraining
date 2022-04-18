#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
  bool flag = true;
  while(flag){
      int num;
      cin>>num;
      if(num==1999){
          flag=false;
          cout<<"Correct"<<endl;
      }else{
          cout<<"Wrong"<<endl;
      }
  }
  
 
    return 0;
}