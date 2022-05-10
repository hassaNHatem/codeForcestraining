#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
   int k;
  
   
   cin>>k;
   int topBack = 0;
   int topForward = k-1;
   for(int j=0;j<k;j++){
    for(int i=0;i<k;i++){
        
        if(i==ceil((k-1)/2) && j==ceil((k-1)/2)){
            cout<<'X';
        }else if(i==topBack){
                cout<<'\\';
               
        }else if(i==topForward){
            cout<<'/';
 
        }else{
            cout<<'*';
        }
                 
   
        
    }
    topBack++;
            topForward--;
 
        cout<<endl;
   }
    return 0;
}
