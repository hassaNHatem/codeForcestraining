#include <iostream>

using namespace std;

int main()
{
    long int numOfDays;
    cin >> numOfDays;
    int years = numOfDays/365;
    numOfDays = numOfDays-(years*365);
    int months = numOfDays/30;
    int days = numOfDays-(months*30);
    cout <<years<<" years"<<endl<<months<<" months"<<endl<<days<<" days";
    
    return 0;
}