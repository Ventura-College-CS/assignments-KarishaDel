/* Make a program that traverses all elements in "double" type array.
use the "double" pointer variable to access each element instead of array notation
Elaborate on the pointer arithmetic expression on your code
What is the address of the first element in the array ?
What is the pointer arithmetic expression to denote the i_th element in the array? */

#include <iostream>
using namespace std;

int main()
{
	const int N = 10;
    double  number[N] = {10.0, 15.2, 21.2, 10.5, 11.3, 12.5, 13.8, 14.7, 19.8, 20.0}; 
    double *ptr;
	

	ptr = number; 
    cout <<  &ptr << endl; //address of first element
    
    for(int i=0; i < N; i++)
    {
        cout << *(ptr+i) << "\t"; //i_th element 
    }

}