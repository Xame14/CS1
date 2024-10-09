#include <iostream>
#include <ctime>
using namespace std;

void flag_controlled_loop();
void pause();
void clear_screen();
void counterNflag_controlled_loop();
void sentinel_controlled_loop();
int randNumGen(int upper, int lower);


int main()
{
	flag_controlled_loop();
	pause();
	clear_screen();
	counterNflag_controlled_loop();
	pause();
	clear_screen();
	sentinel_controlled_loop();

	return 0;
}

void flag_controlled_loop()
{
	char r;
	int age;
	bool correct = false;
	bool ic = false;

	while(ic == false) {
		cout<<"Do you like icecream? (y or n): ";
		cin>>r;
		if (r != 'y')
			if (r != 'n')
				cout<<"Incorrect"<<endl;
		if (r == 'y' || r == 'n') {
			cout<<"Thanks!"<<endl;
			ic = true;
		}
	}
	while(correct == false) {
		cout<<"Enter your age as a number: ";
		cin >> age;
		if ( !cin ) {
			cin.clear();
			cin.ignore(2000, '\n');
		}
		else {
			cout<< "Got it"<<endl;
			correct = true;
		}

	}
}

void pause()
{
	cout<<"Press Enter to continue...";
	cin.sync();
	cin.ignore();
	cin.get();
}

void clear_screen()
{
	cout<<"\033[0;0H\033[2J";

}

void counterNflag_controlled_loop()
{
	int n,g;
	int c = 0;
	n = randNumGen(100, 1);
	bool gs = false;
	while (gs == false && c < 5) {
		cout<<"Guess a number the computer randomly picked between 1 - 100: ";
		cin>>g;
		if(g != n) {
			if (g > n)
				cout<<"Sorry, your guess is too high."<<endl<<endl;
			if (g < n)
				cout<<"Sorry, your guess is too low."<<endl<<endl;
			c = c + 1;
		}
		else {
			cout<<"You guessed right, you win!"<<endl;
			c = c + 6;
		}
		if (c == 5)
			cout<<"Sorry you lost. The answer is: "<<n<<endl;
	}


}

int randNumGen(int upper, int lower)
{
	srand(time(0));
	int f = rand() % (upper + lower);
	return f;
}

void sentinel_controlled_loop()
{
    int in;
    float nc, nt;
    int c = 0;
    int t = 0;
    bool q = false;
    
    while(q == false){
        cout<<"Enter a grade, or a negative number to stop: ";
        cin>>in;
        nt = t;
        nc = c;
        
        if (in > 0){
            c = c + 1;
            t = t + in;
        }
        else{
            cout<<"The average is: "<< nt/nc;
            q = true;
        }
    }
}
