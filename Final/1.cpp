#include <iostream>

using namespace std;

class Course
{
    private:
        int cID;
        string cName;
        int cCredit[0];

    public:
        Course() : cID(0), cName(), cCredit(0) {}
	    Course(int cID, string cName, int cCredit[])
};

int binarySearch (int cCredit[], int first, int last, int target)
{
    int mid;
        
    if(first > last)
        return -1;
    mid = (first + last) /2;
    if (array[mid] == target)
        return mid;
    else if (cCredit[mid] > target)
        return binarySearch(array, first, mid -1, target);
    else    
        return binarySearch(array, mid + 1, last, target);        

}

int main()
{
    int cCredit[] = { 100, 200, 300, 400, 500, 600 };
    int target = 5;
 
    int n = sizeof(array)/sizeof(array[0]);
 
    int first = 0, last = n - 1;
    int index = binarySearch(array, first, last, target);
 
    if (index != -1) {
        printf("Course found at index %d", index);
    }
    else {
        printf("Course not found in the array");
    }
 
    return 0; 
}
