#include <iostream>

using namespace std;

class Course
{
    private:
        int cID;
        string cName;
        int cCredit;

    public:

}
int binarySearch (int array[], int first, int last, int target)
{
    int mid;
        
    if(first > last)
        return -1;
    mid = (first + last) /2;
    if (array[mid] == target)
        return mid;
    else if (array[mid] > target)
        return binarySearch(array, first, mid -1, target);
    else    
        return binarySearch(array, mid + 1, last, target);        

}

int main()
{
    int array[] = { 6, 8, 5, 2, 3, 9 };
    int target = 5;
 
    int n = sizeof(array)/sizeof(array[0]);
 
    int first = 0, last = n - 1;
    int index = binarySearch(array, first, last, target);
 
    if (index != -1) {
        printf("Element found at index %d", index);
    }
    else {
        printf("Element not found in the array");
    }
 
    return 0; 
}
