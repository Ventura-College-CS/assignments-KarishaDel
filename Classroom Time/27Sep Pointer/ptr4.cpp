#include <iostream>
using namespace std;

//void printArray(int [], int);
void printArray(int *, int);
int main()
{
	int 	num[5] = {5, 10, 15, 20, 25} ; // array name is the pointer

	printArray(num, 5);

}

// void printArray(int arr[], int n)
// {
//         for(int i=0; i < 5; i++)
//     {
//         // cout << *(ptr+i) << "\t";
//         cout << *(arr+i) << "\t";
//     }
// }

void printArray(int *ptr[], int n)
{
        for(int i=0; i < 5; i++)
    {
        // cout << *(ptr+i) << "\t";
        cout << *(ptr+i) << "\t";
    }
}

//both of the 