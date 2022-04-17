#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main()
{
    long long int x,y,k;
    cin>>x>>y>>k;
    if(x%k==0&&y%k==0){
        cout<<"Both";
    }else if(x%k==0){
        cout<<"Memo";
    }else if(y%k==0){
        cout<<"Momo";
    }else{
        cout<<"No One";
    }
    
    
 
 
    return 0;
}