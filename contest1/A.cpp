#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main()
{
    int x;
    long double p;
    cin>>x>>p;
    float percent = float(x)/100;
    long double original = p/(1-percent);
    cout<< fixed << original<<endl;
    
 
 
    return 0;
}