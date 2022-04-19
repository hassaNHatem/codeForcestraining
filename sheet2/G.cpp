#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
     long long  fact=1;
    for(int i=0;i<num;i++){
        int test ;
        cin>>test;
       
        for(int j=test;j>0;j--){
            fact*=j;
        }
        cout<<fact<<endl;
        fact=1;
    }
    

    return 0;
}
