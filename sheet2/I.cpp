#include <iostream>
#include<bits/stdc++.h> 
#include <string>

using namespace std;

int main()
{
    int num;
    cin>>num;
    string numtostring = to_string(num);
     string reversed =   numtostring;
     reverse(reversed.begin() , reversed.end());
    cout<<stoi(reversed)<<endl;
    if(numtostring==reversed && reversed.at(0)!='0'){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    

    return 0;
}
