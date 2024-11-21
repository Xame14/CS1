#include <iostream>
#include <fstream>
using namespace std;

void spellcheacker_sec(string sc[]);
const int SIZE = 14; //change to any size that fits
void word_search_binary(const string sc[],string inp);

int main()
{
    cout<<"*************************\nWelcome to spell checker!\n*************************"<<endl;
	const int SIZE = 14; //change to any size 
	string sc[SIZE];
	string inp;
	bool pos = false;
	int t = 0;
	int p = 0;

    ifstream rmy("dictionary.txt");
	for(int i = 0; i < SIZE; i++) {			
			rmy >> sc[i];
	}
	
	rmy.close();

    spellcheacker_sec(sc);


    return 0;
}

void spellcheacker_sec(string sc[])
{
    string inp;
    bool pos = false;
    int t = 0;
    while(pos == false) {
	    cout<<"Please enter a word: ";
		cin>>inp;
		for(int c = 0 ; c < SIZE; c++) {  //sequential
			if(sc[c] == inp){
			    cout<<"This word is spelled correctly!"<<endl<<endl;
			    break;
			}
			
			else if(c == SIZE - 1 && sc[c] != inp){
			    cout<<"Oops! It looks like '"<<inp<<"' isn't quite right. No worries, ";
                cout<<"you're doing great let's try spelling it again."<<endl<<endl;
			    t++;
			}
		}
		
		if(t == 2){
		    cout<<"You have reached the maximum number of misspelled words allowed. Thank you for using this application";
            break;
		}
	    word_search_binary(sc,inp);	
	} 
}

void word_search_binary(const string sc[],string ip)
{
    int low = 0;
    int upr = SIZE - 1;
    while (low <= upr) {
        int mid = low + (upr - low) / 2;
        if (ip == sc[mid]){
            cout<<ip<<" has been found in spot: "<<mid + 1<<endl<<endl;
            break;
        }
            
        if (ip > sc[mid])
            low = mid + 1;
            
        else if(ip < sc[mid])
            upr = mid - 1;
        else
            cout<<ip<<" was not found.";
    }   
}
