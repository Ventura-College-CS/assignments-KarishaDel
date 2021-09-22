#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
void FindStu(ifstream &, int, char, double, double, double, double);

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
	char Stnm;
	double Scr1[1];
	double Scr2[2];
	double Stsum, Stavg;
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
	cout << "ID: " <<s.id <<endl;
	cout << "Name: " << s.sname <<endl;
	cout << "Score 1: " << s.score[0] << endl;
	cout << "score 2: " <<s.score[1] << endl;
	cout << " Sum  : " << s.sum << endl;
	cout << " Avg  : " << s.avg << endl;

	cout << endl;

    ofs.write( (char *)&s, sizeof(s) );
	
	cout << " ID from Bin: " << s.id << endl;
	cout << " Name from Bin: " << s.sname << endl;
	cout << " average from bin: " << s.avg << endl;

}

	cout << "Search student base with ID number:" << endl;
	cin >> IDnum;
	for (int i=0; i<=9; i++)
	{
		if(IDnum = s.id)
		{
			FindStu(ifs, IDnum, Stnm, Scr1[1], Scr2[2], Stsum, Stavg);
		}
	}	
}

void FindStu(ifstream &ifs, int IDnum, char Stnm, double Scr1[], double Scr2[], double Stsum, double Stavg)
{
	ifs >> IDnum;
	ifs >> Stnm;
	ifs >> Scr1[1];
	ifs >> Scr2[2];
	Stsum = Scr1[1] + Scr2[2];
	Stavg= Stsum / 2.0;
	cout << "ID: " <<IDnum <<endl;
	cout << "Name: " << Stnm <<endl;
	cout << "Score 1: " << Scr1[1] << endl;
	cout << "score 2: " <<Scr2[2] << endl;
	cout << " Sum  : " << Stsum << endl;
	cout << " Avg  : " << Stavg << endl;
}

// 	ifs.open("student.bin");
// 	ifs.read( (char *)&s, sizeof(s));

// for (int i=0; i<=9; i++)
// {
//     ofs.write( (char *)&s, sizeof(s) );
	
// 	cout << " ID " << s.id << "\t";
// 	cout << " name " << s.sname << "\t";
// 	cout << " average " << s.avg << "\n";
// }
//ofs.write( (char *)&s, sizeof(s) );
	