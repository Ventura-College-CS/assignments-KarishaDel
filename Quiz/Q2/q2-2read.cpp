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

void compare85(Students * const, int);
void print85(Students * const, int);

int main()
{
    const int N = 10;
    Students    *ptr= new Students [N];

    ifstream ifs;
    ofstream ofs;

 
    ifs.open("student.bin");

	ifs.read( (char *)&ptr, sizeof(ptr) );
    cout << sizeof(Students) << endl;

    compare85(ptr,N);
    cout << "85 or better:" << endl;
    print85(ptr,N);
}


void compare85(Students *ptr, int N)
{
     double sum = 0, avg = 0, store = 0;
    

    for(int i = 0; i < N; i++)
    {
        sum += (ptr+i)->scores[0] + (ptr+i)->scores[1] + (ptr+i)->scores[2];
        avg = sum / 3;    
        
        if( avg > 85)
            {
                avg = store;
            }
    }
}

void print85(Students *ptr, int N)
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