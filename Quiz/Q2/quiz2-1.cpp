#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

double *fillupArray (int N);
void printArray (double *, int N);

int main()
{
    const int N = 10;
    double *ptr = new double;
	ptr = fillupArray(N);
    printArray (ptr, N);

}

double *fillupArray(int N)
{
    double *ptr;
    ptr = new double [N];

    srand(time(0));
    for(int i =0; i <N; i++)
    {
        *(ptr+i) = rand() % 99;
    }

    return ptr;
}

void printArray(double *ptr, int N)
{
	for(int i=0; i<N;i++)
		cout << *(ptr+i) << "\t";
	cout << endl;
}

//The first thing I did was create the functions, one to fill up the array and one to print. The next part 
//was the int(main) in which I assigned the new to double *ptr to create the dynamic memory. 
//Everything else was using the rand to fill up the array then a forloop to print it. 