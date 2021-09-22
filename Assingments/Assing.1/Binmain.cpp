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

    Student s;

	ifs.open("student.bin");
    ifs.read( (char *)&s, sizeof(s));

for (int i=0; i<=9; i++)
{

	cout << " ID " << s.id << "\t";
	cout << " name " << s.sname << "\t";
	cout << " average " << s.avg << "\n";
}	
	//SEARCH Student INFO BY id

}
