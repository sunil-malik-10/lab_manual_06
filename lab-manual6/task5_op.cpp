#include <iostream>
using namespace std;
int discount(string,string,float);
int main() 
{
    string day,month;
    int amount;
    cout<<"Enter the purchase day: ";
    cin>>day;
    cout<<"Enter the purchase month: ";
    cin>>month;
    cout<<"Enter the purchase amount: ";
    cin>>amount;
    cout<<"Payable Amount after discount :"<<discount(day,month,amount);
    
    
    return 0;
}
int discount(string day,string month,float amount)
{
    float payable;
    if(day=="sunday" && month=="october")  
    {
        payable=(amount-(amount*0.10));
        return payable;
    }
    else
    {
     payable=(amount-(amount*0.05));
     return payable;
    }
    
}