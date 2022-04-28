#include <iostream>
 
using namespace std;
 
int
main ()
{
  bool flag = true;
  while(flag){
      int n , m;
      cin>>n>>m;
      if(n<=0 || m<=0){
          flag=false;
      }else{
          int sum = 0;
          if(n>m){
              for(int i=m;i<=n;i++){
                  cout<<i<<" ";
                  sum+=i;
              }
                  
              }else{
                  for(int i=n;i<=m;i++){
                    cout<<i<<" ";
                  sum+=i;
              }
              }
             cout<<"sum ="<<sum<<endl;
          }
      }
  
  
 
  return 0;
}