#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int binarySearch(int [], int, int);
void makeNums(int [], int);
void print(int [], int);
void sortArray(int [], int);
int  linearSearch(int [], int, int);

//MAKE A FUNCTION FOR LINEAR SEARCH AND AVG COMP FOR LINEAR 500
int main()
{
    const int N= 64;
    const int TRIES= 1000;
    int array[N];
    int    target, foundindex;
    int compnumber;

    srand(time(0));
    makeNums(array, N);
    sortArray(array, N);
    print(array, N);
    

    for(int trynum=0; trynum < TRIES; trynum++)
    {

        target = array[rand() % N];
        compnumber += binarySearch(array, N, target);
    }
    cout << "Average comparison number " << compnumber / TRIES << endl;

    for(int trynum=0; trynum < TRIES; trynum++)
    {
        target = array[rand() % N]; 
        compnumber += linearSearch(array,N, target);
       // cout << "Comparison Number: " << compnumber <<endl;
    }
    cout << "Average comparison number linear" << compnumber / TRIES << endl;


}

void makeNums(int array[], int N)
{

    for(int i =0; i <N; i++)
    {
        array[i]= rand() % (N*100)+1;
    }
}
void sortArray(int array[], int N)
{
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (array[j] > array[j + 1])
                swap(array[j], array[j + 1]);
        }
    }
}

void print(int array[], int N)
{
    for (int i = 0; i < N; i++)
    cout << array[i] << "\t";
}

int binarySearch(int array[], int N, int target)
{	
    int first, last, mid, comp;

	first = comp = 0;
	last = N-1;

	while(  first <= last )
	{
		mid = (first + last ) / 2;
		comp++;
		if ( target == array[mid])
		{
			return comp;
			break;
		}
		else if ( target < array[mid]) 
			last = mid - 1;
		else 
		 	first = mid + 1;
	}
    return comp;
}

int linearSearch(int array[], int N, int target)
{
    int comp = 0;

    	for(int i=0;i<N;i++)
	{
        comp++;
		if ( target == array[i] )
        {
            break;
        }	
	}
    return target;
}