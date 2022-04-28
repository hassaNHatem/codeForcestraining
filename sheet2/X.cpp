#include <iostream>
#include <cmath>
using namespace std;
#include <string>

int main()
{
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
    string binary = "";
    string filteredbinary = "";
    int answer = 0;
        int x;
        cin>>x;
        while(x>0){
            if(x%2==0){
                binary.append("0");
            }else{
                binary.append("1");
            }
            x = (int)(x/2);
        }
        for(int j=0;j<binary.length();j++){
            if(binary.at(j)=='1'){
                filteredbinary.push_back(binary.at(j));
            }
        }
        for(int k=0;k<filteredbinary.length();k++){
            answer+= pow(2,k);
        }
        cout<<answer<<endl;
        
    }
    
    return 0;
}
