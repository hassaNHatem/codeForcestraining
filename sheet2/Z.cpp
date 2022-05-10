/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int k , s ;
   int min;
   int answer = 0;
   
   cin>>k>>s;
   
   for(int i=0;i<=k;i++){
       for(int j = 0;j<=k;j++){
           if(s-i-j>=0 && s-i-j<=k){
               answer++;
           }
           }
       }
   
   cout<<answer;
    return 0;
}
