#include <iostream>
using namespace std;

void changeValue1(int &);
void changeValue2(int);
void changeValue3(int *);

int main()
{
	int num = 100;
    

	changeValue1(num);
	cout << num << endl; // 200
    
    num = 100;
    changeValue2(num);
	cout << num << endl; // 100

    num = 100;
    changeValue3(&num);
	cout << num << endl; // 200

}

void changeValue1(int &ref)
{
	ref = 200;
}

void changeValue2(int ref)
{
	ref = 200;
}

void changeValue3(int *ref)
{
	*ref = 200;
}
