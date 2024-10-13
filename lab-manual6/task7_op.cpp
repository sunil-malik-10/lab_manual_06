#include <iostream>
using namespace std;
float discount(string,string,float);
int main() 
{
    string day,month;
    float amount;
    cout<<"Enter the purchase day: ";
    cin>>day;
    cout<<"Enter the purchase month: ";
    cin>>month;
    cout<<"Enter the purchase amount: ";
    cin>>amount;
    cout<<"Payable Amount after discount :"<<discount(day,month,amount);
    
    
    return 0;
}
float discount(string day,string month,float amount)
{
    float payable;
    if(day=="sunday" && month=="october" || day=="sunday" && month=="march" || day=="sunday" && month=="august")  
    {
        payable=(amount-(amount*0.10));
        return payable;
    }
    else
    {
        return amount;
    }
    
}