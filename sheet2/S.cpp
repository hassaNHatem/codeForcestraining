#include <iostream>
 
using namespace std;
 
int
main ()
{
 int num;
 cin>>num;
 for(int i=0;i<num;i++){
     int x,y;
     cin>>x>>y;
     int sum=0;
     if(x>y){
         for(int j=y+1;j<x;j++){
             if(j%2!=0){
                 sum+=j;
             }
         }
     }else{
         for(int j=x+1;j<y;j++){
             if(j%2!=0){
                 sum+=j;
             }
         }
     }
     cout<<sum<<endl;
 }
  
  
 
  return 0;
}