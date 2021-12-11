#include <iostream>
using namespace std;

class Course
{
private: 
    int  CID;
    string Cname;
    int Ccredit;
public:
  Course() : CID(0), Cname(), Ccredit() {}
	Course(int id, string name,int credit)
	{
		CID = id;
		Cname = name;
        Ccredit = credit;
  }
	int getSid() const { return CID; }
	string getSname() const { return Cname; }
  int getCredit() const { return Ccredit;}
	void setCid(int id) { CID = id;}
  void setCname(string name) { Cname = name;}
  void setCcredit(int credit) {Ccredit = credit;}
	
	// void printCourse() const
	
    // {
    
    // cout << "Course ID: " << CID << "\n";
	// 	cout << "Course Name: " << Cname << "\n";
	// 	cout << "Course Credit: " << Ccredit << "\n";
	
    // }
}; 

int BinarySearch(Course arr[],int l,int r,int x)
  {

    if (r >= l) {
      
    int mid = (l + r) / 2;

    if (arr[mid].getSid() == x)
      return mid;
    
   
    
    if (arr[mid].getSid() > x)
        return BinarySearch(arr,l, mid -1, x);
    
    else if (arr[mid].getSid() < x)
        return BinarySearch(arr, mid + 1,r, x);


  }

return -1;
  }

  int main()
  {
    
    Course arr[10];
	// Course s[10];
    
    arr[0].setCid(1);
    arr[0].setCname("Calculus");
    arr[0].setCcredit(0);
    // arr[0].printCourse();
    
    arr[1].setCid(2);
    arr[1].setCname("trig");
    arr[1].setCcredit(1);
    // arr[1].printCourse();
    
    arr[2].setCid(3);
    arr[2].setCname("History");
    arr[2].setCcredit(2);
    // arr[2].printCourse();
    
    arr[3].setCid(4);
    arr[3].setCname("Health");
    arr[3].setCcredit(3);
    // arr[3].printCourse();
    
    arr[4].setCid(5);
    arr[4].setCname("Chemistry");
    arr[4].setCcredit(4);
    // arr[4].printCourse();
    
    arr[5].setCid(6);
    arr[5].setCname("Biology");
    arr[5].setCcredit(5);
    // arr[5].printCourse();
    
    arr[6].setCid(7);
    arr[6].setCname("Psychology");
    arr[6].setCcredit(6);
    // arr[6].printCourse();
    
    arr[7].setCid(8);
    arr[7].setCname("Speech");
    arr[7].setCcredit(7);
    // arr[7].printCourse();
    
    arr[8].setCid(9);
    arr[8].setCname("Physics");
    arr[8].setCcredit(8);
    // arr[8].printCourse();
    
    arr[9].setCid(10);
    arr[9].setCname("English");
    arr[9].setCcredit(9);
    // arr[9].printCourse();
    
    int target = 0;

    // int arr[]={1,2,3,4,5,6,7,8,9,10};
    cout << "Enter ID of wanted course: ";
    cin >> target;
 
    int n = sizeof(arr)/sizeof(arr[0]);
 
    int first = 0, last = n - 1;
    int index = BinarySearch(arr, first, last, target);
 
    if (index != -1) {
        cout << "Course is found in the array at position: "<< target; 
		// getCid , arr[index].getSname(), .. 
        cout << arr[target].getSname()<< endl;
        cout << arr[target].getSid()<< endl;
        cout << arr[target].getCredit() << endl;
        
    }
    else {
        cout <<"Course not found in the array";
    }
 
    return 0; 
}

