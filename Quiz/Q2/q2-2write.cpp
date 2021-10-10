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
    // double sum;
    // double avg;
};

Students *makeStudents(int N);

int main()
{
    const int N = 10;
    Students    *ptr;

    ptr = makeStudents(N);

}

Students *makeStudents(int N)
{
    ifstream ifs;
    ofstream ofs;
    Students    *ptr= new Students [N]; //THIS IS DYNAMIC MEMORY

    ifs.open("students.txt");
    ofs.open("student.bin");

    if ( ifs.fail())
    {
        cerr << "File open error\n";
        exit(0);
    }
    
	for(int i=0;i<N; i++)
    {
	    ifs >> (ptr+i)->sid;
	    ifs >> (ptr+i)->sname;
        ifs >> (ptr+i)->scores[0];
	    ifs >>(ptr+i)->scores[1];
        ifs >>(ptr+i)->scores[2];
        // (ptr+i)->sum = (ptr+i)->scores[0] + (ptr+i)->scores[1]+ (ptr+i)->scores[2];
	    // (ptr+i)->sum / 3.0;

        if ( ofs.fail() )
		{
			cerr << "File Read Error\n";
			exit(0);
		}
        
        ofs.write( (char *)ptr, sizeof(ptr) );

        cout << " ID from Bin: " << (ptr+i)->sid << endl;
	    cout << " Name from Bin: " << (ptr+i)->sname << endl;
        cout << " Scores from Bin: " << (ptr+i)->scores[0] << ", " << (ptr+i)->scores[1] << ", " << (ptr+i)->scores[2] << endl;
        

        cout << endl;
    }
    
    ifs.close();
	ofs.close();
    return ptr;

}

	
