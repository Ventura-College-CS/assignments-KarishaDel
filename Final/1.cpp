#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Course
{
private: 
    int  cID;
    string cName;
    int cCredit;
public:
  Course() : cID(0), cName(), cCredit() {}
	Course(int id, string name,int credit)
	{
		cID = id;
		cName = name;
        cCredit = credit;
        // for (int i; i<10; i++)
        //     {
        //         cCredit[i] = rand() % 15;
        //     } 
  }
	
    int getSid() const { return cID; }
	string getSname() const { return cName; }
    int getCredit() const { return cCredit;}
    void setCid(int id) { cID = id;}
    void setcName(string name) { cName = name;}
    void setcCredit(int credit) {cCredit = credit;}
	
}; 

int BinarySearch(Course array[],int first,int last,int target)
  {
    if (last >= first)
    {   
        int mid = (first + last) / 2;

        if (array[mid].getSid() == target)
            return mid;

        if (array[mid].getSid() > target)
            return BinarySearch(array,first, mid -1, target);
        
        else if (array[mid].getSid() < target)
            return BinarySearch(array, mid + 1,last, target);
    }
    return -1;
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
    
    array[8].setCid(8);
    array[8].setcName("Physics");
    array[8].setcCredit(4);
    
    array[9].setCid(9);
    array[9].setcName("English");
    array[9].setcCredit(3);
    
    int target = 0; 
    
    cout << "Course ID 0-9. Enter ID of course: ";
    cin >> target;
 
    int n = sizeof(array)/sizeof(array[0]);
 
    int first = 0, last = n - 1;
    int index = BinarySearch(array, first, last, target);
 
    if (index != -1) {
        cout << "Course is found in the array at position: "<< target <<endl; 
        cout << "Name of Course: "<< array[target].getSname()<< endl;
        cout << "Course ID 100" << array[target].getSid()<< endl;
        cout << "Credit for this cousre: " << array[target].getCredit() << endl;  
    }
    else 
    {
        cout <<"Course not found in the array";
    }
 
    return 0; 
}

