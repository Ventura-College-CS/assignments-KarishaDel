#include <iostream>
using namespace std;

void myfunction();

int main()
{
	char *ptr;

	char name[10];

	ptr = name;

	cout << "Enter your name \n";
	cin >> ptr ;


	int *iptr;
    //1) iptr = new int;
    //2) iptr = nuormal variable's address
        //iptr = &i;

	cin >> *iptr; // causes error

}

