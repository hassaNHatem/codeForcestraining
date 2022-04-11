#include <iostream>
using namespace std;

int main()
{   
    float point1;
    float point2;
    cin>>point1>>point2;
    if(point2==0&&point1!=0){
        cout<<"Eixo X";
    }else if(point1==0&&point2!=0){
        cout<<"Eixo Y";
    }else if(point1==0&&point2==0){
        cout<<"Origem";
    }else
    if(point1>0&&point2>0){
        cout<<"Q1";
    }else if(point1>0&&point2<0){
        cout<<"Q4";
    }else if(point1<0&&point2>0){
        cout<<"Q2";
    }else{
        cout<<"Q3";
    }
    

    return 0;
  
}