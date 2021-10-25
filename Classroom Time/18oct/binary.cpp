#include    <iostream>
using namespace std;

int     binarySearch(int [], int, int);
/*gotta sort first or the binary wont work. the bianry will start in the middle then continue to the left or right 
it will always jump to the middle untill it gets to the corret number */
int main()
{
    const int N= 10;
    int array[N] = {10, 15, 20, 25, 30, 35, 40, 45, 50, 55};
    int    target, foundindex;

    cout << "Enter the number to find in this array : ";
    cin >> target;

    int first, last, mid, comp;
    first = comp = 0;
    last = N-1;

    while(first <= last)
    {
        mid = (first + last) / 2;
        comp++;
        if (target == array[mid])
        {
            cout << "Found " << target << " with " << comp << "comaprison" << endl;
            break;
        }
        else if (target < array[mid])
            last = mid - 1;
        else
            first = mid + 1;

    }

	

}

/* when debugged looking for 20 it took 3 comparisond. 30, 15 then 20
Breakpoint 1, main () at binary.cpp:20
20      while(  first <= last )
(gdb) p first
$1 = 0
(gdb) p last
$2 = 9
(gdb) n
22          mid = (first + last ) / 2;
(gdb) n
23          comp++;
(gdb) p mid
$3 = 4
(gdb) p array[mid]
$4 = 30
(gdb) n
24          if ( target == array[mid])
(gdb) n
29          else if ( target < array[mid]) 
(gdb) n
30              last = mid - 1;
(gdb) n

Breakpoint 1, main () at binary.cpp:20
20      while(  first <= last )
(gdb) p last
$5 = 3
(gdb) n
22          mid = (first + last ) / 2;
(gdb) p first
$6 = 0
(gdb) p last
$7 = 3
(gdb) n
23          comp++;
(gdb) p mid
$8 = 1
(gdb) Quit
(gdb) quit
A debugging session is active.*/