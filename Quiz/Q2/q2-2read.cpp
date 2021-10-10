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
//void print85(Students * const, int);

int main()
{
    const int N = 10;
    Students    *ptr= new Students [N];

    ifstream ifs;
    ofstream ofs;

 
    ifs.open("student.bin");

    for(int i = 0; i < N; i++)
    {
        ifs.read( (char *)(ptr+i), sizeof(Students));
    }

    //ifs.read( (char *)(ptr+i), sizeof(Students*N)); 
	
    cout << sizeof(Students) << endl;

    compare85(ptr,N);

}


void compare85(Students *ptr, int N)
{
     double sum = 0, avg = 0, store = 0;
    
    for(int i = 0; i < N; i++)
    {
        sum =0;
        sum += (ptr+i)->scores[0] + (ptr+i)->scores[1] + (ptr+i)->scores[2];
        avg = sum / 3;    
        
        if( avg > 85)
            {
                cout << "ID: " << (ptr+i)->sid << endl;
                cout << "Name: " << (ptr+i)->sname << endl;
                cout << "85 or better:" << avg << endl;
            }
    }
}

/*READ.CPP: Similar initial steps as the write file with the exception that I now had to make a function to compare the averages of the scores.
 On line 30 I did not see that I had to use a forloop but in order to run thru all 10 students I had to make sure the file was read 10 times. */
