#include <iostream>
using namespace std;

int main()
{
	int num = 100;

	//int &ref; // wrong
    int &ref = num; //MUST INTIALIZE at the same time

	ref = num;

	cout << ref << endl;// print 100

    ref = 200;

	cout << ref << endl;// print 200
    cout << num << endl; //print 200
}