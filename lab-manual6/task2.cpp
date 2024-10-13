#include <iostream>
using namespace std;
int parityAnalysis(int);
int main() {
    int number;
    cout<<"Enter the 3-digit number:";
    cin>>number;
    
    cout<<""<<parityAnalysis(number);
    
    
    return 0;
}
int parityAnalysis(int number)
{
    int n=number%10;
    int sum=0;
        sum+=n;
        n=n/10;
        sum+=n;
        n=(number/10)%10;
        sum+=n;
    if(sum%2==0 && number%2==0)  
    {
        return 1;
    }
    else if(sum%2!=1 && number%2!=1)
    {
        return 1;
    }
    if(sum%2==1 && number%2==0)  
    {
        return 0;
    }
     if(sum%2==0 && number%2==1)  
    {
        return 1;
    }
    
    
    
}