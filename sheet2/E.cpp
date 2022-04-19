#include <iostream>

using namespace std;

int main()
{
    int num;
    int max=0;
    cin>>num;
    for(int i=0;i<num;i++){
        int el;
        cin>>el;
        if(el>max){
            max=el;
        }
    }
    cout<<max;

    return 0;
}
