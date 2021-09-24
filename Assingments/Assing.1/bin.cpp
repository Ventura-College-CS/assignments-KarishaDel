#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
void FindStu(ifstream &, int);

struct Student 
{
  int id;
  char sname[20];
  double score[2];
  double sum;
  double avg;
  
};

int main()
{
    ifstream ifs;
    ofstream ofs;
	Student s;

	int IDnum;

    ifs.open("students.txt");
    ofs.open("student.bin");

for (int i=0; i<=9; i++)
{
	ifs >> s.id;
	ifs >> s.sname;
    ifs >> s.score[0];
	ifs >> s.score[1];
    s.sum = s.score[0] + s.score[1];
	s.avg= s.sum / 2.0;

    ofs.write( (char *)&s, sizeof(s) );
	
	cout << " ID from Bin: " << s.id << endl;
	cout << " Name from Bin: " << s.sname << endl;
	cout << " average from bin: " << s.avg << endl;
    cout << endl;

}
	ifs.close();
	ofs.close();

	ifs.open("student.bin");
	cout << "Search student base with ID number:" << endl;
	cin >> IDnum;
	FindStu(ifs, IDnum);

}

void FindStu(ifstream &ifs, int IDnum)
{

	Student s;
	int found=0; //flag
	for (int i=0; i<=9; i++)
	{
		ifs.read( (char *)&s, sizeof(s) );
		if(IDnum == s.id)
		{
			found = 1;
			s.sum = s.score[0] + s.score[1];
			s.avg= s.sum / 2.0;
			cout << "ID: " <<s.id <<endl;
			cout << "Name: " << s.sname <<endl;
			cout << "Score 1: " << s.score[0] << endl;
			cout << "score 2: " <<s.score[1] << endl;
			cout << " Sum  : " << s.sum << endl;
			cout << " Avg  : " << s.avg << endl;
		}
	}	
	if(!found)
		cout << "Not found. " << endl;
}

