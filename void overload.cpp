#include <iostream>
using namespace std;

void swapin(float& x, float& y);

void multiply(int x,int y,int& result);
void multiply(int a,int b,int c,int& result);
void multiply(float j, float k,float& result);
void multiply(float a, float b,float c,float& result);


int main()
{
    int result = 0;
    float num1, num2;
    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    
    swapin(num1, num2);
    
    cout << "First number is "<<num1<<" second number is "<<num2<<"."<<endl;
    
    multiply(4,5,result);
    cout<<result<<endl;
    
    multiply(2,3,4,result);
    cout<<result<<endl;
    
    multiply(4.5,5.9,result);
    cout<<result<<endl;
   
    multiply(8.1,5.9,7.1,result);
    cout<<result<<endl;
   
   
    return 0;
}

void swapin(float& x, float& y)
{
   float swap = x; 
   x = y;
   y = swap;

}

void multiply(int x,int y,int& result)
{
    result = x * y;
   
}

void multiply(int a,int b,int c,int& result)
{
    result = a*b*c;  
    
}

void multiply(float j,float k,float& result)
{
    result = j*k;
    
}

void multiply(float a,float b,float c,float& result)
{
    result = a*b*c;

}
