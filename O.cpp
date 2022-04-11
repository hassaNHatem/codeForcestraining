#include <iostream>
using namespace std;

int main()
{   
    long int num;
    long int num2;
    char ch;
    cin >>num>>ch>>num2;
    
    if(ch=='+'){
        cout<<num+num2;
    }else if(ch=='/'){
        cout<<num/num2;
    }else if(ch=='*'){
        cout<<num*num2;
    }else{
        cout<<num-num2;
    }
    

    return 0;
  
}