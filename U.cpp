#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
     float num1;
    cin>>num1;
    float decimal = (num1-int(num1));
    if(decimal==0){
        cout<<"int "<<int(num1);
    }else{
        cout<<"float "<<int(num1)<<" "<<round( decimal * 1000.0 ) / 1000.0;
    }
}