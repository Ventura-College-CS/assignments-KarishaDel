#include	<iostream>
#include <fstream>

using namespace	std;

void stu_find();

struct student
{
	int	id;
	string	name;
	string	address;
};


int	main()
{
	student	s1;
	student 	s2 = {10001, "Mary", "Lafayette"};
	ifstream rdfile;

	rdfile.open("students.txt");

	cout << "Enter the student's information (id, name, address)\n";
	cin >> s1.id >> s1.name >> s1.address ;
	cout << "Student Info S1\n" << s1. id << "\t" << s1.name << "\t" << s1.address << endl;
	
	cout << "Student Info S2\n" << s2. id << "\t" << s2.name << "\t" << s2.address << endl;
}

void stu_find()
{
	int input;
	cout << "Enter the student ID:";
	cin >> input;
	if (input )
	

}