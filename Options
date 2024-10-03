#include <iostream>
using namespace std;

int main()
{
    char opt = ' ';
    
    cout<<"Please select one of the options:"<< endl
        <<"(A) Find the greatest number"<< endl
        <<"(B) Find negative numbers"<< endl
        <<"(C) Clear screen"<< endl
        <<"(D) Verify the denominator"<<endl<<endl
        <<"Option: ";
    cin>>opt;
    
    if (opt == 'A'|| opt == 'a'){
        float a,b;
        cout<<"What is the first number: ";
        cin>>a;
        cout<<"What is the second number: ";
        cin>>b;
        
        if (a > b)
            cout<<a<<" is greater than "<<b<<".";
        else if (a < b)
            cout<<b<<" is greater than "<<a<<".";
        else
            cout<<"The numbers are the same.";
    }   
    
    if (opt == 'B' || opt == 'b'){
        float a;
        cout<<"Enter the number you want checked:";
        cin>>a;
        if (a < 0)
            cout<<a<<" is a negitive number";
        if (a > 0)
            cout<<a<<" is a positive number.";
        else
            cout<<"The number is a nutral number,";
    }
    
    if (opt == 'C'|| opt == 'c')
        cout<<"\033[2J\033[1;1H";
    
    if (opt == 'D'|| opt == 'd'){
        char a,b,c;
        cout<<"Enter a rational number in X/Y format:";
        cin>>a,b,c;
        if (b == '/' && c != '0')
            cout<<"The denomintator is: "<<c;
        else
            cout<<"There was an error with your input";
    }   
    
    return 0;
}
