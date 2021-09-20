#include <iostream>
#include <fstream>

using namespace std;

struct Student {
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

    ifs.open("students.txt");
    ofs.open("student.bin");

	ifs >> s.id;
	ifs >> s.sname;
	ifs >> s.score[0];
	ifs >> s.score[1];
	s.sum = s.score[0] + s.score[1];
	s.avg= s.sum / 2.0;
	cout << "ID: " <<s.id <<endl;
	cout << "Nmae: " << s.sname;
	cout << "Score 1: " << s.score[0] << endl;
	cout << "score 2: " <<s.score[1] << endl;
	cout << " Sum  : " << s.sum << endl;
	cout << " Avg  : " << s.avg << endl;
s.sname, s.score[0], s.score[1]