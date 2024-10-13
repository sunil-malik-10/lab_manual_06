#include <iostream>
using namespace std;
int findGreatest(int,int,int);
int main() 
{
    int num1 ,num2,num3;
    cout<<"Enter the First number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
      cout<<"Enter the third number: ";
    cin>>num3;
    cout<<"The greatest number among:"<<num1<<"," <<num2 <<" and "<<num3<<" is: "<<findGreatest(num1,num2,num3);
    
    
    return 0;
}
int findGreatest(int num1,int num2,int num3)
{
    float Perimeter;
    if(num1>num2  && num1>num3)  
    {
        return num1;
    }
    else if(num1<num2  && num3<num2)  
    {
        return num2;
    }
    else
    {
    return num3;
    }
    
}