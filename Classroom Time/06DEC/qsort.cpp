#include <iostream>
using namespace std;

void qsort(int[], int, int);
int partition(int[], int, int);
void printArray(int[], int);

int main()
{
	const int N = 7;
	int num[] = {1, 8, 5, 9, 4, 3, 7};

	printArray(num, N);
	qsort(num, 0, N-1); // qsort (0, 6);
	printArray(num, N);

}

void qsort(int num[], int first, int last)
{
	int pivot_idx;

	// Base Condition
	if ( first >= last )
		return;

	pivot_idx = partition(num, first, last);
	qsort(num, first, pivot_idx-1); // qsort(0, 3)-> q(0,0) -> q(3,3)
	qsort(num, pivot_idx+1, last);  // qsort(2,3) ->  

}

int partition(int num[], int first, int last)
{
	int pivot = num[last];
	int i = -1;
	for (int j = 0; j < last; j++)
	{
		if (num[j] < pivot)
			swap(num[++i], num[j]);
	}
	swap(num[i + 1], num[last]);
	return i + 1;
}
void printArray(int num[], int N)
{

	for (int i = 0; i < N; i++)
		cout << num[i] << "\t";
	cout << endl;
}