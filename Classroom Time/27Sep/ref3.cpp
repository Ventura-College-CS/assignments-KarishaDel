// reference variable as a return value

#include <iostream>
using namespace std;

int &getValue(void);

int main()
{
	cout << "Return value is " << getValue() << endl;

}

int &getValue()
{
	int num = 100;
	return num; // This line causes the error since the local var. num cannot be used after the function.
}