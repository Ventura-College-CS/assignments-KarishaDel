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
        for (int i; i<10; i++)
            {
                int cCredit[i] = rand() % 15;
            } 
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
    int target = 0; 
    Course array[10];   
    
    array[0].setCid(1000);
    array[0].setcName("Spanish");
    array[0].setcCredit();
    
    array[1].setCid(1001);
    array[1].setcName("Geometry");
    array[1].setcCredit();
    
    array[2].setCid(1002);
    array[2].setcName("Psyc");
    array[2].setcCredit();
    
    array[3].setCid(1003);
    array[3].setcName("Lit");
    array[3].setcCredit();
    
    array[4].setCid(1004);
    array[4].setcName("C++");
    array[4].setcCredit();
    
    array[5].setCid(1005);
    array[5].setcName("Java");
    array[5].setcCredit();
    
    array[6].setCid(1006);
    array[6].setcName("Psychology");
    array[6].setcCredit();
    
    array[7].setCid(1007);
    array[7].setcName("Speech");
    array[7].setcCredit();
    
    array[8].setCid(1008);
    array[8].setcName("Physics");
    array[8].setcCredit();
    
    array[9].setCid(1009);
    array[9].setcName("English");
    array[9].setcCredit();
    
    cout << "Course ID 1000-1009. Enter ID of course: ";
    cin >> target;
 
    int n = sizeof(array)/sizeof(array[0]);
 
    int first = 0, last = n - 1;
    int index = BinarySearch(array, first, last, target);
 
    if (index != -1) {
        cout << "Course is found in the array at position: "<< target; 
        cout << array[target].getSname()<< endl;
        cout << array[target].getSid()<< endl;
        cout << array[target].getCredit() << endl;
        
    }
    else 
    {
        cout <<"Course not found in the array";
    }
 
    return 0; 
}

