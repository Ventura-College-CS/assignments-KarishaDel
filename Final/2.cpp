#include <iostream>
#include <ctime>
#include <cstdlib>
#include <array>

using namespace std;

class Course
{
private: 
    int  cID;
    string cName;
    int cCredit;
public:
  Course() : cID(0), cName(), cCredit() {}
	Course(int id, string name, int credit)
	{
		cID = id;
		cName = name;
        cCredit = credit;
  }
	
    int getSid() const { return cID; }
	string getSname() const { return cName; }
    int getCredit() const { return cCredit;}
    void setCid(int id) { cID = id;}
    void setcName(string name) { cName = name;}
    void setcCredit(int credit) {cCredit = credit;}
	
};  

int partition (Course array[], int first, int last) 
{ 
    Course pivot = array[last];
    int i = (first - 1);   
   
    for (int j = first; j <= last- 1; j++) 
    { 
        if (array[i].getSid() <= pivot.getSid()) //using pivot as a holding spot
        { 
            i++;   
            swap(array[i], array[j]); 
        } 
    } 
    swap(array[i + 1], array[last]); 
    return (i + 1); 
} 
   
void quickSort(Course array[], int first, int last) 
{ 
    if (first > last) 
    { 
        int pivot = partition(array, first, last); 
   
        quickSort(array, first, pivot - 1); 
        quickSort(array, pivot + 1, last); 
    } 
} 

  int main()
  { 
    Course array[10];   
    
    array[0].setCid(0);
    array[0].setcName("Spanish");
    array[0].setcCredit(4);
    
    array[1].setCid(1);
    array[1].setcName("Geometry");
    array[1].setcCredit(4);
    
    array[2].setCid(2);
    array[2].setcName("Psyc");
    array[2].setcCredit(5);
    
    array[3].setCid(3);
    array[3].setcName("Lit");
    array[3].setcCredit(6);
    
    array[4].setCid(4);
    array[4].setcName("C++");
    array[4].setcCredit(2);
    
    array[5].setCid(5);
    array[5].setcName("Java");
    array[5].setcCredit(3);
    
    array[6].setCid(6);
    array[6].setcName("Psychology");
    array[6].setcCredit(2);
    
    array[7].setCid(7);
    array[7].setcName("Speech");
    array[7].setcCredit(5);

    array[9].setCid(9);
    array[9].setcName("English");
    array[9].setcCredit(3);

    array[8].setCid(8);
    array[8].setcName("Physics");
    array[8].setcCredit(4);
    

    
 
    int n = sizeof(array)/sizeof(array[0]);
    int i;
    quickSort(array, 0, n-1);

    for(int i=0; i< n; i++)
        {
            cout << "Name of Course: "<< array[i].getSname()<< endl;
            cout << "Course ID 100" << array[i].getSid()<< endl;
            cout << "Credit for this cousre: " << array[i].getCredit() << endl; 
            cout << endl;
        }
    // int first = 0, last = n - 1;

}

/* Right now I am running into the problem that they are comapring to eachother but not
the entire array to fix this problem I went to line 62 and flipped the sign. This allowed the 
ID to be in increasing order.*/


