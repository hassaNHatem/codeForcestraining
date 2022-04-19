#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    bool flag = true;
    int counter = 2;
    while(flag && counter<num){
        if(num%counter==0){
            flag = false;
        }else{
            counter++;
        }
    }
    
    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    

    return 0;
}
