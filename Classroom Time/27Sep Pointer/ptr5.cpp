//will yield an error

#include <iostream>
using namespace std;

int main()
{
    int *ptr;

    cout << *ptr;
}
//segmentation fault (core dump): permission denied to access that memory spot