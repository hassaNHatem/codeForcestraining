#include <iostream>

using namespace std;

int main()
{
    int num1 , num2 , answer;
    char aruth , equal;
    cin >> num1 >> aruth >> num2 >> equal >>answer;
    if(aruth=='+'){
        if(num1+num2==answer){
            cout<<"Yes";
        }else{
            cout<<(num1+num2);
        }
    }else if(aruth=='-'){
        if(num1-num2==answer){
            cout<<"Yes";
        }else{
            cout<<(num1-num2);
        }
    }else{
        if(num1*num2==answer){
            cout<<"Yes";
        }else{
            cout<<(num1*num2);
        }
    }

    return 0;
}
