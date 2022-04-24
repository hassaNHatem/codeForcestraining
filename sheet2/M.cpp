#include <iostream>
 
using namespace std;
 
int main()
{   
    
    int n,k;
    cin>>n>>k;
   
    int count = 0;
    for (int i=n; i<=k; i++){
        bool flag=true;
        int j = i;
        
        while(j > 0) {
            
            if((j % 10 != 4 && j % 10 != 7)) {
                flag=false;
            }
            
            j = j / 10;
        }
        if(flag &&i>1){
            count++;
            cout<<i<<" ";
        }
    }
    if(count==0){
        cout<<-1;
    }
   
    return 0;
}