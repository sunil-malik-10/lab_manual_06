#include <iostream>
using namespace std;
float totalIncome(string, int, int);
int main() 
{
    string screening_type;
     int number_of_rows,number_of_columns;
    cout<<"Enter the screening type (Premiere/Normal/Discount): ";
    cin>>screening_type;
    cout<<"Enter the number of rows: ";
    cin>>number_of_rows;
    cout<<"Enter the number of columns: ";
    cin>>number_of_columns;
    cout<<""<<totalIncome(screening_type,number_of_rows,number_of_columns);
    
    
   
}
float totalIncome(string screening_type, int number_of_rows, int number_of_columns)
{  
    float totalincome;
    if(screening_type=="Premiere")
    {
        totalincome=number_of_rows*number_of_columns*12.00;
        return totalincome;
    }
    else if(screening_type=="Normal")
  {
        totalincome=number_of_rows*number_of_columns*7.50;
        return totalincome;
    }
      else if(screening_type=="Discount")
     {
        totalincome=number_of_rows*number_of_columns*5.00;
        return totalincome;
    }
    
    
}