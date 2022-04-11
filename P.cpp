#include <iostream>
using namespace std;

int main()
{   
    long int num;
    cin>>num;
   int firstdigit = num/1000;
   if(firstdigit%2==0){
       cout<<"EVEN";
   }else{
       cout<<"ODD";
   }
    

    return 0;
  