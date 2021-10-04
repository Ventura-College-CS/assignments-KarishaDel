#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

double *makeNums(int N);
void printNums(double *, int N);
void sortNums (double *, int N);
void deleteNums(double *);

int main()
{
    const int N = 10;
    double *ptr;

	ptr = makeNums(N);
    printNums (ptr, N);

}

void sortNums (double *ptr, int N)
{
    delete ptr;
}

void deleteNums(double *ptr)
{

}

void printNums(double *ptr, int N)
{
	for(int i=0; i<N;i++)
		cout << *(ptr+i) << "\t";
	cout << endl;
}

double *makeNums(int N)
{
    double *ptr;

    ptr = new double [N];

    srand(time(0));
    for(int i =0; i <N; i++)
    {
        *(ptr+i) = rand() % 100;
    }

    return ptr;
}