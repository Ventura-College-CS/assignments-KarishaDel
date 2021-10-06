#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

double *makeNums(int N);
void printNums(double *, int N);
void sortNums (double *, int N, int flag);
void deleteNums(double *);

int main()
{
    const int N = 10;
    double *ptr;
    int flag;

	ptr = makeNums(N);
    printNums (ptr, N);

    sortNums(ptr, N, flag);
    
    deleteNums(ptr);

}

void sortNums (double *ptr, int N, int flag)
{
    int i;
     if(flag == 0)
    {
        sort(ptr, ptr + N); //sort does acending be default so no change is needed
    }

    if(flag == 1)
    {
        sort(ptr, ptr + N, greater<double>()); //puts the larger element before
    }   

//print to makesure its in order
     for(int i=0; i<N;i++)
		cout << *(ptr+i) << "\t";
	cout << endl;
}

void deleteNums(double *ptr)
{
    delete ptr;
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