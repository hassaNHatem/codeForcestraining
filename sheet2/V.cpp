#include <iostream>
 
using namespace std;
 
int
main ()
{
 int num;
 cin>>num;
 int counter=1;
    for(int i=0;i<num;i++){
        for(int j=0;j<3;j++){
            cout<<counter<<" ";
            counter++;
        }
        cout<<"PUM"<<endl;
        counter++;
    }
  return 0;
}