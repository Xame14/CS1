#include <iostream>
#include <iomanip>
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
    LRP = 35; 
    SRP = 25;
    tax = cost *.06;
    total = tax + cost;
    
    cout<<left<<setw(30)<<"How many large rooms need to be cleaned?: ";
    cin>>right>>setw(10)>>LR;
    cout<<left<<setw(30)<<"How many small rooms need to be cleaned?: ";
    cin>>SR;
    cout<<endl<<left<<setw(30)<<"Estamate for carpet cleaning sevice： "<<endl
        <<left<<setw(30)<<"Number of Large rooms： "
        <<right<<setw(12)<<LR<<endl
        <<left<<setw(30)<<"Number of Small rooms: "
        <<right<<setw(11)<<SR<<endl
        <<left<<setw(30)<<"The price per large room is: "
        <<right<<setw(10)<<"$"<<LRP<<endl
        <<left<<setw(30)<<"The price per small room is: "
        <<right<<setw(10)<<"$"<<SRP<<endl;
    cost = (SRP * SR) + (LRP * LR);
    tax = cost *.06;
    cout<<left<<setw(30)<<"The cost is："
        <<right<<setw(11)<<"$"<<cost<<endl;
    tax = cost *.06;
    cout<<left<<setw(30)<<showpoint<<setprecision(2)<<fixed<<"Tax： "
        <<right<<setw(11)<<"$"<<tax<<endl
        <<"============================================="<<endl;
    total = tax + cost;
    cout<<showpoint<<setprecision(2)<<fixed<<left<<setw(30)<<"Total estimate： "
        <<right<<setw(11)<<"$"<<total<<endl
        <<left<<setw(30)<<"This estimate is only valid for 30 days.";

    return 0;
}
