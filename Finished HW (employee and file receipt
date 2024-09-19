#include <iostream>
#include <iomanip>
#include <fstream>
#include <algorithm> // For transform function
#include <cctype> // For toupper function
using namespace std;

float sales_tax (float a,float b,float c,float d,float e);

float recipt(float x,float y,float z,float j,float k,string a,string b,string c,string d,string e,float ght, float total,float subtotal);

int main()
{
	string name;
	string i1;
	string i2;
	string i3;
	string i4;
	string i5;
	float p1,p2,p3,p4,p5;
	
	float ght;
    float total;
    float subtotal;

	cout << "Please enter employee name: ";
	getline (cin,name);
	cout <<endl<< "Enter 5 items and prices, if less than five enter '-' for item and '0' for price." <<endl << endl;

	//item 1
	cout << "Please enter item #1: ";
	getline (cin, i1);
	cout << "Please enter price: ";
	cin >> p1;
	cin.ignore();

	//item 2
	cout << endl << "Please enter item #2: ";
	getline (cin, i2);
	cout << "Please enter price: ";
	cin >> p2;
	cin.ignore();

	//item 3
	cout << endl << "Please enter item #3: ";
	getline (cin, i3);
	cout << "Please enter price: ";
	cin >> p3;
	cin.ignore();

	//item 4
	cout << endl << "Please enter item #4: ";
	getline (cin, i4);
	cout << "Please enter price: ";
	cin >> p4;
	cin.ignore();

	//item 5
	cout << endl << "Please enter item #5: ";
	getline (cin, i5);
	cout << "Please enter price: ";
	cin >> p5;

	subtotal = p1+p2+p3+p4+p5;
	ght = subtotal * .15;
    total = ght + subtotal;
	
	recipt(p1,p2,p3,p4,p5,i1,i2,i3,i4,i5,ght,total,subtotal);


	return 0;
}



float recipt(float x,float y,float z,float j,float k,string a,string b,string c,string d,string e,float ght, float total,float subtotal)//*
{
    ofstream Myfile("recipt.txt");
    

    Myfile<<left<<setw(5)<<"         Thanks for shopping"<< endl
        <<left<<setw(5)<<"             at my store"<<endl<<endl<<endl
        <<"Store# 5"<<endl
        <<"Edinburg, Tx 78359"<<endl<<endl
        <<left<<setw(25)<<a
        <<right<<setw(12)<<"$   "<<x <<endl
        <<left<<setw(25)<<b
        <<right<<setw(12)<<"$   "<<y <<endl
        <<left<<setw(25)<<c
        <<right<<setw(12)<<"$   "<<z <<endl
        <<left<<setw(25)<<d
        <<right<<setw(12)<<"$   "<<j <<endl
        <<left<<setw(25)<<e
        <<right<<setw(12)<<"$   "<<k<<endl<<endl
        <<left<<setw(5)<<" "
        <<right<<setw(12)<<"Subtotal                    $   "<< showpoint<<setprecision(2)<<fixed<< subtotal <<endl
        <<left<<setw(5)<<" "
        <<right<<setw(12)<<"Tax                         $   "<< showpoint<<setprecision(2)<<fixed<< ght <<endl
        <<left<<setw(5)<<" "
        <<right<<setw(12)<<"Total                       $   "<< showpoint<<setprecision(2)<<fixed<<total <<endl
        <<left<<setw(5)<<"         *** CUSTOMER COPY***";
    Myfile.close();
	        
	   
	    return 0;
}
