#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    long long int num1 ,num2;
    cin>> num1 >> num2;
    string to32num1 = std::bitset<32>(num1).to_string();
    string to32num2 = std::bitset<32>(num2).to_string();
    string answer = "";
    for(int i=0;i<32;i++){
        if(to32num1.at(i)==to32num2.at(i) ){
            answer.append("0");
        }else{
              answer.append("1");
        }
    }
    cout<<std::bitset<32>(answer).to_ulong();
}