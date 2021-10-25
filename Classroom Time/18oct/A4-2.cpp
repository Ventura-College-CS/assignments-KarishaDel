#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int binarySearch(int [], int, int);
void makeNums(int [], int);
void print(int [], int);
void bubbleSort(int [], int);

int main()
{
    const int N= 2048; //128 IS 2**7 (** THIS MEANS EXPONENT) 2**20
    const int TRIES= 1000000;
    // int array[N] = {10, 15, 20, 25, 30, 35, 40, 45, 50, 55};
    int array[N];
    int    target, foundindex;
    int compnumber;

    srand(time(0));
    makeNums(array, N);
    bubbleSort(array, N);
    print(array, N);

    for(int trynum=0; trynum < TRIES; trynum++)
    {
        // cout << "Enter the number to find in this array : ";
        // cin >> target;
        target = array[rand() % N]; //N goes to 0-1023
        compnumber += binarySearch(array, N, target);
       // cout << "Comparison Number: " << compnumber <<endl;
    }
    cout << "Average comparison number " << compnumber / TRIES << endl;


}

void makeNums(int array[], int N)
{

    for(int i =0; i <N; i++)
    {
        array[i]= rand() % (N*100)+1;
    }
}
void bubbleSort(int array[], int N)
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

