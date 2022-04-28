#include <iostream>
 
using namespace std;
 
int
main ()
{
 int num;
 cin>>num;
  int whitespace = num-1;
     int stars = 1;
 for(int i=0;i<num;i++){
    
    for(int j =0;j<whitespace;j++){
        cout<<" ";
    }
    for(int k=0;k<stars;k++){
        cout<<'*';
    }
    whitespace-=1;
    stars+=2;
    cout<<endl;
  
 
}
  return 0;
}