#include <iostream>
 
using namespace std;
 
int
main ()
{
 int num;
 cin>>num;
  int whitespace = num-1;
     int stars = 1;
     int backwardstars = num*2-1;
     int backwardwhite = 0;
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
for(int i=0;i<num;i++){
    
    for(int j =0;j<backwardwhite;j++){
        cout<<" ";
    }
    for(int k=0;k<backwardstars;k++){
        cout<<'*';
    }
    backwardwhite+=1;
    backwardstars-=2;
    cout<<endl;
  
 
}
  return 0;
}