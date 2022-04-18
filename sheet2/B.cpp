#include <iostream>

using namespace std;

int main()
{
    int num;
    int evenCounter=0;
    cin>>num;
    for(int i=1;i<=num;i++){
        if(i%2==0){
            evenCounter++;
            cout<<i<<endl;
        }
    }
    if(evenCounter==0){
        cout<<-1;
    }
    return 0;
}
