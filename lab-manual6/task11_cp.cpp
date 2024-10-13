#include <iostream>
using namespace std;
string speed_check(float);
int main() 
{
    float speed;
    cout<<"Enter the speed: ";
    cin>>speed;
    cout<<""<<speed_check(speed);
    
    
   
}
string speed_check(float speed)
{
    string result="";
    if(speed<=10)
    {
        string result="slow";
        return result;
    }
    else if(speed>10 && speed<=50 )
    {
        string result="average";
        return result;
    }
      else if(speed>50 && speed<=150 )
    {
        string result="fast";
        return result;
    }
      else if(speed>150 && speed<=1000 )
    {
        string result="ultra-fast";
        return result;
    }
      else 
    {
        string result="extremely fast";
        return result;
    }
    
}