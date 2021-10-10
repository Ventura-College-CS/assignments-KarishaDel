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

Students *makeStudentsBin(int N);

int main()
{
    const int N = 10;
    Students    *ptr;

    ptr = makeStudentsBin(N);

}

Students *makeStudentsBin(int N)
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
        
        ofs.write( (char *)(ptr+i), sizeof(Students) );

            // char *ptr;
            // char c='a';
            // ptr=&c;
            // cout << sizeof(ptr) << endl;
    }
    
    ifs.close();
	ofs.close();
    return ptr;

}

	
/*WRITE.CPP: The first mistake I made was that I had put the struct under the StudentsBin function. 
Once I fixed that I took similar steps as assignments 1 and 2-4. Since I was using the ptr pointer 
I had to change all of s. to ptr and since it was a dynamic memory I had to use the +i so it would 
run thru the entire text file. The next part stumped me on how to get the information to be copied into the bin file. 
I was not allocating enough memory but I was able to fix that on line 57 
by using the sizeof(Students) which is the struct. */