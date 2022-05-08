#include <iostream>
 
using namespace std;
 
int main()
{
     int num;
    cin>>num;
    for(int i=0;i<num;i++){
          int number;
        cin>>number;
       
        if(number==0){
            cout<<0;
        }
        while(number!=0){
             int n = number%10;
             if(number/10==0){
                 cout<<n;
             }else{
            cout<<n<<" ";
             }
            number = number/10;
        }
        if(i<num-1){
            cout<<endl;
        }
    }
 
    return 0;
}