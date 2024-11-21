#include <iostream>
using namespace std;
int main()
{
    cout<<"Welcome to Cleaning Crew Co."<<endl<<endl;
    
    int LR;
    int SR;
    int LRP;
    int SRP;
    int cost;
    float tax;
    float total;
    
    cout<<"How many large rooms need to be cleaned?: ";
    cin>>LR;
    cout<<"How many small rooms need to be cleaned?: ";
    cin>>SR;
    cout<<endl<<"Estamate for carpet cleaning sevice: "<<endl;
    cout<<"Number of Large rooms: "<<LR<<endl;
    LRP = 35;
    SRP = 25;
    cout<<"Number of Small rooms: "<<SR<<endl;
    cout<<"The price per large room is: $"<<LRP<<endl;
    cout<<"The price per small room is: $"<<SRP<<endl;
    cost = (SRP * SR) + (LRP * LR);
    cout<<"The cost is: $"<<cost<<endl;
    tax = cost * .06;
    cout<<"Tax: $"<<tax<<endl;
    cout<<"=================================="<<endl;
    total = tax + cost;
    cout<<"Total estimate: $"<<total<<endl;
    cout<<"This estimate is only valid for 30 days.";
    

    return 0;
}
