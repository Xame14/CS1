#include <iostream>
#include<iomanip>
#include<fstream>
#include<cstring>
using namespace std;

const int MOVIES_SIZE = 20;

struct Movies
{
	string movie_name;
	int year;
	int revenue;
};

void storeMoviesArray(ifstream& inFile, Movies topMovies[], const int SIZE);
void sortMoviesTitle(Movies topMovies[], const int SIZE);
void printMoviesArray(Movies topMovies[], const int SIZE);
int findMovieTitle(Movies topMovies[], const int SIZE, string title);

int main()
{
    ifstream inFile;
	inFile.open("Movies.txt");

	if (!inFile)
	{
		cout << "Error opening input file" << endl;
		return 1;
	}
    
    Movies movie_list[MOVIES_SIZE];
    storeMoviesArray(inFile,movie_list,MOVIES_SIZE);
    
    string uit;
    char ans;
    int pos;


    do
	{
		cout << "\033[0;0H\033[2J";
		sortMoviesTitle(movie_list, MOVIES_SIZE);
		printMoviesArray(movie_list,MOVIES_SIZE);
        cout<<endl<<"Enter a movie title: ";
        cin>>uit;
        pos = findMovieTitle(movie_list,MOVIES_SIZE, uit);
        if(pos == -1){
            cout << "Movie name: " << uit << " was not found" << endl << endl;
        }
        else{
            cout<<"Title: "<< movie_list[pos].movie_name<<endl;
            cout<<"Year: "<< movie_list[pos].year<<endl;
            cout<<"Revenue: "<< movie_list[pos].revenue<<endl;
        }
        // if(!cin)
        //     cin.ignore();
        cout << "Do you want to continue[y/n]?:";
		cin >> ans;
	}while (ans == 'y' || ans == 'Y');

    return 0;
}

void storeMoviesArray(ifstream& inFile, Movies topMovies[], const int SIZE)
{
    for(int i = 0;i < SIZE; i++ ){
        inFile >> topMovies[i].movie_name >> topMovies[i].year >> topMovies[i].revenue;
    }
}

void sortMoviesTitle(Movies topMovies[], const int SIZE)
{
    Movies temp;
    
    for (int i = 0; i < SIZE; ++i)
	{
		for(int j = 0; j < SIZE - i - 1; ++j)
		{
			if (topMovies[j].movie_name > topMovies[j + 1].movie_name)
			{
				temp = topMovies[j];
				topMovies[j] = topMovies[j + 1];
				topMovies[j + 1] = temp;
			}
		}
	}
}

void printMoviesArray(Movies topMovies[], const int SIZE)
{
    cout<<right<<setw(35)<<"Movie Title"
        <<right<<setw(6) <<"Year"
        <<right<<setw(10)<<"Revenue"
        <<endl<<endl;
    for(int i = 0;i < SIZE; i++){
        cout<< right<<setw(36)<<topMovies[i].movie_name<<" "
            << left <<setw(4) <<topMovies[i].year << " "
            <<"$"<< right<<setw(10)<<topMovies[i].revenue<<endl;
        
    }
}

int findMovieTitle(Movies topMovies[], const int SIZE, string title)
{
    int low = 0;
    int upr = SIZE - 1;
    while (low <= upr) {
        int mid = (low + upr) / 2;
        if (title == topMovies[mid].movie_name){
            return mid;
        }
            
        else if (title.compare( topMovies[mid].movie_name) > 0)
            low = mid + 1;
            
        else
            upr = mid - 1;
        
    }    

    return -1;
}
