#include <iostream>
using namespace std;
string title_checker(int,char);
int main() 
{
     int age;
     char gender;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your gender(m/f): ";
    cin>>gender;
    cout<<"Your personal title is: "<<title_checker(age,gender);
    
    
   
}
string title_checker(int age,char gender)
{
    string result="";
    if(age>=16 && gender=='m')
    {
        string title="Mr.";
        return title;
    }
    else if(age<16 && gender=='m')
    {
        string title="Master";
        return title;
    }
      else  if(age>=16 && gender=='f')
    {
        string title="Ms.";
        return title;
    }
     else if(age<16 && gender=='f')
    {
        string title="Miss";
        return title;
    }
    
}