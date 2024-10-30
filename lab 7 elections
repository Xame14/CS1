#include <iostream>
#include<fstream>
#include<iomanip>
#include<cstring>

using namespace std;

const int NUM_CANDIDATES = 6;

int sumList(const int list[], int size);
int indexOfMax(const int list[], int size);
// This function gets the results from the file and returns them in the corresponding
void getElectionData(ifstream & iFile, string candidates[], int ballots[], int & count);
void printResults(const string candidates[], const int ballots[], int count, int totalBallots);

int main()
{
    ifstream inFile;
	string names[NUM_CANDIDATES];	// The names of the candidates
	int max = 0;				    	// number of candidates processed
    int votes[NUM_CANDIDATES];	   	// The number of votes received by each candidate
	int totalVotes;					// number of votes received by all candidateThe totals
    
    inFile.open("votingresults.txt");
    
    if (!inFile)
	{
		cout << "File not found!" << endl << endl;
		return 1;
	}
    
    getElectionData(inFile, names, votes, max);
    
    totalVotes = sumList(votes, NUM_CANDIDATES);
    
    printResults(names,votes,max,totalVotes);
	
    return 0;
}

int sumList(const int list[], int size)
{
    int total = 0;
    for(int i = 0; i < size; i++){
        total = total + list[i];
    }
    return total;
}

int indexOfMax(const int list[], int size)
{
    int most = list[0];
    int spot = 0;
    int i = 1;
    while (i < size){
        if (list[i] > most) {
            most = list[i];
            spot = i;
            i++;
        }
        else
            i++;
    }
    return spot;
}    
void getElectionData(ifstream & iFile, string candidates[], int ballots[], int & count)
{	
	int i = 0;
	while(i < NUM_CANDIDATES){
        iFile >> candidates[i] >> ballots[i];
        i++;
	}
}

void printResults(const string candidates[], const int ballots[], int count, int totalBallots)
{
    int w_spot = indexOfMax(ballots,NUM_CANDIDATES);
    double perc;
    double VoteS = 0;
    int tv = totalBallots;
    cout<<right<<setw(12)<<"Candidates "
        <<right<<setw(12)<<"Num Votes "
        <<right<<setw(12)<<"% of Votes "<<endl;
        
    for(int i = 0; i < NUM_CANDIDATES; i++){
        VoteS = ballots[i];
        perc = (VoteS/tv) * 100;
        cout<<right<<setw(11)<<candidates[i]
            <<right<<setw(12)<<ballots[i]
            <<showpoint<<setprecision(2)<<fixed<<right<<setw(12)<<perc<<endl;
    }
    cout<<"The winner is: "<< candidates[w_spot];
    
}
