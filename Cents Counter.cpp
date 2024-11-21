#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
//variables
	int cts_am;
	int dlr, qrt, dime, nic, pny;
	int dlra,qrta, dimea, nica, pnya;

//output and input
	cout<<"Enter the amount of cents: ";
	cin>>cts_am;
	cout<<endl
	    <<left<<setw(12)<<"Dollars" 
	    <<right<<setw(15)<<"(1 = 100 cents)"<<endl
	    <<left<<setw(12)<<"Quarters"
	    <<right<<setw(15)<<"(1 =  25 cents)"<<endl
	    <<left<<setw(12)<<"Dimes"
	    <<right<<setw(15)<<"(1 =  10 cents)"<<endl
	    <<left<<setw(12)<<"Nickels"
	    <<right<<setw(15)<<"(1 =   5 cents)"<<endl
	    <<left<<setw(12)<<"Pennies "
	    <<right<<setw(15)<<"(1 =   1 cents)"<<endl;
//logic values
	dlr = 100;
	qrt = 25;
	dime = 10;
	nic = 5;
	pny = 1;
	// divison
	dlra = cts_am / dlr;
	cts_am = cts_am - dlra * 100;

	qrta = cts_am / qrt;
	cts_am = cts_am - qrta * 25;

	dimea = cts_am / dime;
	cts_am = cts_am - dimea * 10;

	nica = cts_am / nic;
	cts_am = cts_am - nica * 5;

	pnya = cts_am / pny;
	cts_am = cts_am - pnya * 1;
//output
	cout<<endl<<"==========================="<<endl
	    <<left<<setw(12)<<"Dollars: "
	    <<right<<setw(8)<<dlra<<endl
	    <<left<<setw(12)<<"Quarters: "
	    <<right<<setw(8)<<qrta<<endl
	    <<left<<setw(12)<<"Dimes: "
	    <<right<<setw(8)<<dimea<<endl
	    <<left<<setw(12)<<"Nickles: "
	    <<right<<setw(8)<<nica<<endl
	    <<left<<setw(12)<<"Pennies: "
	    <<right<<setw(8)<<pnya<<endl;


	return 0;
}
