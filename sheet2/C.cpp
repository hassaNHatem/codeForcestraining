#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main()
{
    
    char aplh;
    cin>>aplh;
    if(aplh=='z'){
        cout<<'a';
    }else{
    cout<<(char)((int)aplh+1);}
    return 0;
}