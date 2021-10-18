#include <iostream>
#include <cstring>
using namespace std;

struct Students{
	int id;
	char *name;

};

int main()
{

	Students s1;
    s1.id = 10;
    s1.name=new char[20];
    strcpy(s1.name , "John");
    //s1 : id=10, name = john 

    Students s2;
    s2 = s1;

    cout << "S2's id " << s2.id << endl;
	cout << "S2's name " << s2.name << endl;

    //delete s2.name;
    strcpy(s2.name, "Bill");

    cout << "S1's id " << s1.id << endl;
	cout << "S1's name " << s1.name << endl;

}