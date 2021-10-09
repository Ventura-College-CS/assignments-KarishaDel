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