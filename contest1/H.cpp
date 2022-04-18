#include <iostream>

using namespace std;

int main()
{
    long long a,k,n;
    cin>>n>>k>>a;
    long double output = (double)(n*k)/a;
    long double decimal = output-(long long)output;
    if(decimal!=0){
        cout<<"double";
    }else if(output<=2147483647&&output>=-2147483647){
        cout<<"int";
    }else{
        cout<<"long long";
    }

    return 0;
}
