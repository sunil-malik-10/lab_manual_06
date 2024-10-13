#include <iostream>
using namespace std;
int greaterNumber(int,int);
int main() {
    int number1,number2;
    cout<<"Enter the first number:";
    cin>>number1;
    cout<<"Enter the second number:";
    cin>>number2;
    cout<<""<<greaterNumber(number1,number2);
    
    
    return 0;
}
int greaterNumber(int number1,int number2)
{
    if(number1<number2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
    
    
}