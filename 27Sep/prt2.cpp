#include <iostream>
using namespace std;

int main()
{
	int 	num[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45 ,50} ; //array is also a pointer
    double  d[5] = {1.0, 2.0, 3.0, 4.0, 5.0}; // * 8 bytes
    double *dptr;
	int 	*ptr1;

	ptr1 = num; //num is a pointer

	cout << *ptr1 << endl; //prints first number of array
    cout << *(ptr1+4) << endl; //prints fith number of array

    dptr = d;
    cout << *(dptr+4) << endl;


}