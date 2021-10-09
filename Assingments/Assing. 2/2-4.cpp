#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

const int 	MAX_LEN = 20;
const int 	NUM_SCORES = 3;
struct Students 
{
	int 	sid;
	char 	sname[MAX_LEN];
	double 	scores[NUM_SCORES];
};

Students *makeStudents(int N);
void printStudents(Students * const, int);
void sortStudents(Students * const, int);

int main()
{
    const int N = 10;
    Students    *ptr;

    ptr = makeStudents(N); //gotta make it loop
	printStudents(ptr, N);
    sortStudents(ptr, N);
	cout << "After sorting\n";
	printStudents(ptr, N);

}

Students *makeStudents(int N)
{
    ifstream ifs;
    Students    *ptr= new Students [N]; //THIS IS DYNAMIC MEMORY

    ifs.open("students2-4.txt");
    if ( ifs.fail())
    {
        cerr << "File open error\n";
        exit(0);
    }

	for(int i=0;i<N; i++)
    {
        ifs >> (ptr+i)->sid >> (ptr+i)->sname; //GOTTA CHANGE THE ptr to dynamic
        
        for(int j=0; j<NUM_SCORES; j++)
			ifs >> (ptr+i)->scores[j] ;
		
        if ( ifs.fail() )
		{
			cerr << "File Read Error\n";
			exit(0);
		}
    }
    return ptr;
}

void printStudents(Students *ptr, int N)
{
	for(int i=0; i<N;i++)
	{
		cout << (ptr+i)->sid << "\t";
		cout << (ptr+i)->sname << "\t";
		for(int j=0;j<3; j++)
			cout << (ptr+i)->scores[j] << "\t";
	cout << endl;
	}
}

void sortStudents(Students *ptr, int N)
{
    double sum1 = 0, sum2 = 0;
    

    for(int i = 0; i < N; i++)
    {
        sum1 = 0, sum2 = 0;
        for(int j=0; j < N-1; j++)
        {
            for(int k=0; k < 3; k++)
          {  
            sum1 += (ptr+j)->scores[k];
            sum2 += (ptr+j+1)->scores[k];
          }    
            if( sum1 > sum2)
            {
                swap ( *(ptr+j), *(ptr+j+1));
            }
        }
 
	    
        // Need one more for loop to comapre all adjacent students pairs.
	    // 
	    
	    	// Need one more for loop or statement to get sum of each student
	    	//  sum1 += (ptr+i)->scores[0] + (ptr+i)->scores[1] + (ptr+i)->scores[2] ;
	    	// and also sum2 += ...
	    
	    	// Next, compare the sum1 and sum2
	    	// if sum1 > sum2, swap the struct Student at once.
	    	// swap( the left student pointer, the right student pointer);
    }

}		
