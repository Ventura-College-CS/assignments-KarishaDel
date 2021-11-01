#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void initVectors(vector<int> & , vector<string> &, int);
void printVectors(vector<int> , vector<string> , int);
void sortVectors(vector<int> &, vector<string> &, int);

int main()
{
    const int N=10;
    vector<int> IDs(N);
    vector<string> names(N);

    initVectors(IDs, names, N);
    printVectors(IDs, names, N);
    sortVectors(IDs, names, N);
    printVectors(IDs, names, N);

}

void initVectors(vector<int> &IDs, vector<string> &names, int N)
{
    //this will pull the info from the text file
    ifstream ifs;
    
    ifs.open("StuVector.txt");

    if ( ifs.fail())
	{
		cerr << "File Open Error\n";
		exit(0);
	}

	for(int i=0;i<N;i++)
	{
        ifs >> IDs[i] >> names[i] ;
        if ( ifs.fail() )
		{
			cerr << "File Read Error\n";
			exit(0);
		}
    }
    
}
void sortVectors(vector<int> &IDs, vector<string> &names, int N)
{
    //This fuction is going to sort it by ID numbers and then will sort the names by the ID Numbers
    int minval, minid;
    string tmp;
    for(int i=0; i<N; i++)
    {
        minval = IDs[i];
        minid = i;
        for(int j=i+1; j<N; j++)
        {
            if ( minval > IDs[j] )
            {
                minval = IDs[j];
                minid = j;
            }
        }
        IDs[minid] = IDs[i];
        IDs[i] = minval;

        tmp = names[minid];
        names[minid] = names[i];
        names[i] = tmp;
    }
}
void printVectors(vector<int> IDs, vector<string> names, int N)
{
    for(int i=0; i<N; i++)
        cout << IDs[i] << "\t" << names[i] << "\n";
    cout << endl;
}

/* Why do we need to use the sort assingment?
In order to use the search functions we need to have the vector in order. This will save time and processing power
which is most notably in larger programs.
*/