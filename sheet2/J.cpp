#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        bool flag = true;
        int index=2;
        
        if(i==2){
             cout<<2;
        }else if(i!=1){
            while(flag && index<i){
                if(i%index==0){
                    flag = false;
                    
                }else{
                    index++;
                }
            }
            if(flag){
                 cout<<" "<<i;
            }
        }
    }

    return 0;
}
