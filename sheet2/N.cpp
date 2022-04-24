#include <iostream>
 
using namespace std;
 
int main()
{   
    char sign;
    int num;
    cin>>sign>>num;
    for(int i=0;i<num;i++){
        int iterator;
        cin>>iterator;
        for(int j=0;j<iterator;j++){
            cout<<sign;
        }
        cout<<endl;
    }
 
    return 0;
}