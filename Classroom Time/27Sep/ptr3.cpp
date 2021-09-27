#include <iostream>
using namespace std;

int main()
{
	int 	num[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45 ,50} ;
    
    // int *ptr;
    // ptr = num;

    for(int i=0; i < 5; i++)
    {
        // cout << *(ptr+i) << "\t";
        cout << *(num+i) << "\t";
    }

}