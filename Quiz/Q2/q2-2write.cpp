#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

const int 	MAX_LEN = 20;
const int 	NUM_SCORES = 3;
struct Students 
{
	int 	sid;
	char 	sname[20];
	double 	scores[3];
};

int main()
{
    const int N = 10;
    Students    *ptr= new Students [N];

    ifstream ifs;
    ofstream ofs;

    ifs.open("students.txt");
    ofs.open("student.bin");

for (int i=0; i<=9; i++)
{
	ifs >> (ptr+i)->sid;
	ifs >> (ptr+i)->sname;
    ifs >> (ptr+i)->scores[1];
	ifs >> (ptr+i)->scores[2];
    ifs >> (ptr+i)->scores[3];

    ofs.write( (char *)&ptr, sizeof(ptr) );
	
}
	ifs.close();
	ofs.close();
}