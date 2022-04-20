#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int num1,num2;
    cin>>num1>>num2;
    int minn = min(num1,num2);
    int index = 1;
   
    for(int i=1;i<=minn;i++){
       if(num1%i==0 && num2%i==0){
           index=i;
       }
    }
        cout<<index;
    return 0;
}
