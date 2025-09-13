#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//function declaration
void input(string[], int[]);
void Percentage(int[], double[], int);
void output(string[], int[], double[], int);

int main() 
{
	
	cout<< "    **********************************" << endl; 
	cout<< "    *         Machine Problem 3       *" << endl;
	cout<< "    *     Computer Programming I     *" << endl;
	cout<< "    * Author: Jumier Rey U. Cabanero *" << endl;
	cout<< "    *    Due Date: Sunday, Dec 24   *" << endl;
	cout<< "    **********************************" << endl << endl;
	
	
    const int numCandidates = 5;

    // Arrays to store data
    string lastNames[numCandidates];
    int votesReceived[numCandidates];
    double percentages[numCandidates];

	// FUNCTION CALL
	
    // Input
    input(lastNames, votesReceived);

	// Percentage
    Percentage(votesReceived, percentages, numCandidates);

    // Output
    output(lastNames, votesReceived, percentages, numCandidates);

    return 0;
}

// FUNCTION DEFINITION

//input candidate information
void input(string lastNames[], int votesReceived[]) 
{
    cout << "Enter the last names and votes received for each candidate:" << endl;
    for (int i = 0; i < 5; ++i) 
	{
        cout << "Candidate " << i + 1 << ": ";
        cin >> lastNames[i] >> votesReceived[i];
    }
}

// calculate percentages
void Percentage(int votesReceived[], double percentages[], int numCandidates) 
{
    int totalVotes = 0;

    for (int i = 0; i < numCandidates; ++i) 
	{
        totalVotes = votesReceived[i] + totalVotes;
    }

    for (int i = 0; i < numCandidates; ++i) 
	{
        percentages[i] = static_cast<double > (votesReceived[i]) / totalVotes * 100;
    }
}

//output
void output(string lastNames[], int votesReceived[], double percentages[], int numCandidates) 
{
    int IndexW = 0;
    int totalVotes = 0;
    
    cout << endl << endl;
    cout << setw(15) << left << "Candidate" << setw(1) << right << "Votes Received" << setw(20) << right << "% of Total Votes" << endl;
    cout << "--------------------------------------------------" << endl;

    for (int i = 0; i < numCandidates; ++i) 
	{
        cout << setw(15) << left << lastNames[i] << setw(8) << right << votesReceived[i];
        cout << fixed << setprecision(2) << setw(20) << right << percentages[i] << "%" << endl;

		totalVotes = votesReceived[i] + totalVotes; // Calculate total votes
		
        if (percentages[i] > percentages[IndexW]) 
		{
            IndexW = i;
        }
    }
    
	cout << "--------------------------------------------------" << endl;
	
    cout << setw(15) << left << "Total Votes" << setw(5) << right << totalVotes << " votes   ";
    cout << fixed << setprecision(2) << setw(15) << right << 100.0 << "%" << endl;
    cout << "--------------------------------------------------" << endl;

    cout << endl << "The winner of the election is " << lastNames[IndexW];
}
