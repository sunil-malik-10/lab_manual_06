#include <iostream>
using namespace std;
float calculating_perimeter(char,float);
int main() {
    char shape;
    float number;
    cout<<"Enter the shape (s for sqaure,c for circle, t for triangle,h for hexagon):";
    cin>>shape;
    cout<<"Enter the value:";
    cin>>number;
    
    cout<<"The perimeter is:"<<calculating_perimeter(shape,number);
    
    
    return 0;
}
float calculating_perimeter(char shape,float number)
{
    float Perimeter;
    if(shape=='s')  
    {
        Perimeter=4 *number;
    }
    if(shape=='c')
    {
        Perimeter=6.28 * number;
    }
    if(shape=='t')  
    {
       Perimeter=3 * number;
    }
     if(shape=='h')  
    {
       Perimeter=6 * number;
    }
    
    return Perimeter;
    
}