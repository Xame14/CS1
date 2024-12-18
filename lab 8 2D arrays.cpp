#include <iostream>
#include <iomanip>
using namespace std;

// Function prototyp
int const DIM = 7;
char createBoard(char d2ary[][DIM],int inp);
void printBoard1(char table[][DIM],int maxrow,int maxcol);
void printBoard2(char table[][DIM],int maxrow,int maxcol);

int main()
{
	char let[DIM][DIM];
	int bsize;
	char l;
	char ans;
	do
	{
		cout << "\033[0;0H\033[2J";
		cout<<"Please enter the size of the board [1-7]: ";
		cin>>bsize;
        while (cin.fail()) {
            cin.clear(); // Clear error flags
            cin.ignore(); // Discard remaining input
            cout << "Invalid entry. "<<endl;
        }
        if(bsize < 0 || bsize > 7)
            cout<<"Invalid size";
        
        createBoard(let,bsize);
        printBoard1(let,bsize,bsize);
        cout<<endl;
        printBoard2(let,bsize,bsize);
        
        cout << "Do you want to continue[y/n]?:";
		cin >> ans;
	}while (ans == 'y' || ans == 'Y');
	// Function calls


	return 0;
}


// Function definitions

char createBoard(char d2ary[][DIM],int inp)
{
    char x=65;
    int row,col;
    for(int row = 0;row < inp; ++row){
        for(int col = 0;col < inp; ++col){
            if(col % 2 == 0 && row % 2 == 0){
                d2ary[row][col] = x;
                x = x + 1;
            }
            else if(col % 2 == 1 && row % 2 == 0)
                d2ary[row][col] = ' ';
            else if(col % 2 == 1 && row % 2 == 1){
                d2ary[row][col] = x;
                x = x + 1;
            }
            else if(col % 2 == 0 && row % 2 == 1)
                d2ary[row][col] = ' ';
        }
        
    }
}






void printBoard1(char table[][DIM],int maxrow,int maxcol)
{
    int row, col;
	for (row = 0; row < maxrow; ++row )		// will loop maxrow times
	{
		cout << "Row " << row << ": ";
		for (col = 0; col < maxcol; ++col ) // will loop maxcol times
		{
			cout  <<setw(2) << table[row][col];
		}
		cout << endl;
	}
	cout << endl;
}






void printBoard2(char table[][DIM],int maxrow,int maxcol)
{
    int row, col;
	for (row = 0; row < maxrow; ++row )		// will loop maxrow times
	{
		cout << "Row " << row << ": ";
		for (col = 0; col < maxcol; ++col ) // will loop maxcol times
		{
			cout  <<setw(2)<< table[col][row];
		}
		cout << endl;
	}
	cout << endl;
}
