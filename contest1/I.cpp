#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    int firstDigit = (int)(num/10);
    int scndDigit = num%10;
    if(scndDigit!=0 && (firstDigit%scndDigit==0 || scndDigit%firstDigit==0)){
        cout<<"YES";
    }else if(scndDigit==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
