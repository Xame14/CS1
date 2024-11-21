#include <iostream>
#include "BankAccount.h"
using namespace std;

//Header---------------------------------------
class BankAccount {
public:
    BankAccount();
    BankAccount(string name, double amm);
    
    string getaccountHolder() const;
    double getbalance() const;
    
    void setaccountHolder(string name);
    void setbalance(double amm);
    
    void deposite(double depo);
    void withdraw(double with);

private:
    string accountHolder;
    double balance;
};

//Class.cpp----------------------------------------------

BankAccount::BankAccount() {
    accountHolder = " ";
    balance = 0.0;
}

BankAccount::BankAccount(string name, double amm) {
    accountHolder = name;
    balance = amm;
}

string BankAccount::getaccountHolder() const {
    return accountHolder;
}

double BankAccount::getbalance() const {
    return balance;
}

void BankAccount::setaccountHolder(string name) {
    accountHolder = name;
}

void BankAccount::setbalance(double amm) {
    balance = amm;
}

void BankAccount::deposite(double depo){
    balance = balance + depo;
}

void BankAccount::withdraw(double with){
    balance = balance - with;
}

//Main.cpp----------------------------------------

int main() {
	char choi;

	cout<<"Welcome to the Bank Account System!"<<endl
	    <<"Please select an option:"<<endl
	    <<"(N) Create a new account"<<endl
	    <<"(E) Exit"<<endl<<endl
	    <<"Enter your choice: ";

	cin>>choi;

	if (choi == 'N' || choi == 'n') {
		string nombre;  //holders name
		double ibal;    //initial balance
		bool leave = false;
        
		cout<<"Enter account holder name: ";
		cin>>nombre;
		cout<<"Enter initial balance: ";
		cin>>ibal;
		cout<<"Account created for "<<nombre<<" with balance "<<ibal;
		
		BankAccount BA1(nombre,ibal);
        
		do {
            char imchoi; //important choice
			
            cout << "\033[0;0H\033[2J";
            cout<<"Welcome to the Bank Account System!"<<endl
                <<"Please select an option:"<<endl
                <<"(D) Deposite funds"<<endl
                <<"(W) Withdraw funds"<<endl
                <<"(B) Check balance"<<endl
                <<"(c) Change account holder name"<<endl
                <<"(E) Exit"<<endl<<endl
                <<"Enter your choice: ";
            cin>>imchoi;
//Exit out-----------------------------------------------------------            
        
            if(imchoi == 'E' || imchoi == 'e')
                leave = true;
//Deposite----------------------------------------------------------
        
            else if(imchoi == 'D' || imchoi == 'd'){
                double depo;//deposite
                
                cout<<"Enter deposite amount: ";
                cin>>depo;
                if(depo < 0){
                    cout << "\033[0;0H\033[2J";
                    cout<<"Error"<<endl;
                    cout<<"Press Enter to continue...";
                    cin.sync();
                    cin.ignore();
                    cin.get();
                    continue;
                }
                else{
                    BA1.deposite(depo);
                    cout<<endl<<"Deposited "<<BA1.getbalance()<<" to "<< BA1.getaccountHolder()<<"'s account.";
                    cout<<endl<<endl<<"Press Enter to continue...";
                    cin.sync();
                    cin.ignore();
                    cin.get();
                    continue;
                }
                
            }
//Withdraw------------------------------------------------------------        
            else if(imchoi == 'W' || imchoi == 'w'){
                double with;//withdraw
                
                cout<<"Enter the withdraw amount: ";
                cin>>with;
                if(with > BA1.getbalance()){
                    cout << "\033[0;0H\033[2J";
                    cout<<"Error"<<endl;
                    cout<<"Press Enter to continue...";
                    cin.sync();
                    cin.ignore();
                    cin.get();
                    continue;
                }
                else{
                    BA1.withdraw(with);
                    cout<<endl<<"A withdraw of "<<with<<" to "<< BA1.getaccountHolder()<<"'s account has gone through.";
                    cout<<endl<<endl<<"Press Enter to continue...";
                    cin.sync();
                    cin.ignore();
                    cin.get();
                    continue;
                }
            }
//check balance---------------------------------------------
            else if(imchoi == 'B' || imchoi == 'b'){
                cout<<BA1.getaccountHolder()<<"'s balance: "<<BA1.getbalance();
                cout<<endl<<endl<<"Press Enter to continue...";
                cin.sync();
                cin.ignore();
                cin.get();
                continue;
            } 
//change Holders Name---------------------------------------
            else if(imchoi == 'C' || imchoi == 'c'){
                string new_nombre;
                cout<<"What name would you like put for your account: ";
                cin>>new_nombre;
                BA1.setaccountHolder(new_nombre);
                cout<<endl<<endl<<"Press Enter to continue...";
                cin.sync();
                cin.ignore();
                cin.get();
                continue;
            }
		}while (leave == false);
		
		cout << "\033[0;0H\033[2J";
		cout<<"Thank you for your service!";
	}

	else {
		cout << "\033[0;0H\033[2J";
		cout<<"Thank you for your service!";
	}

}
