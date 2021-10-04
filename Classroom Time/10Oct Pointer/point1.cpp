#include <iostream>
using namespace std;

struct Students
{
    int id;
    char name[10];
};

int main()
{
	int 	*ptr;
	int 	num=100;
    Students s;
    Students *sptr;

    sptr = new Students; //custom data type so the amount of bytes needed is 2 fields int , char [10] = 14 byte

    sptr->id = 10;

    (*sptr).id = 20; //these two are the samething
    sptr->id = 20; // -> pointer

	ptr = &num; // basic use of pointer var.
	cout << *ptr << endl; // 100 

	ptr = new int; // points to new memory space ( 4bytes)
	*ptr = 200; 
	cout << *ptr << endl; // Garbage value -> 200 


	ptr = new int[10]; // allocated 10 x 4 bytes = contninuos 40bytes

    *ptr = 10; //1000
    *(ptr+4) = 20; //1000 + (4x4) =1016
	*(ptr+8) = 30;  //1000 + (8 x unit)= 1000+(8x4)= 1032  

    for(int i = 0; i <10; i++)
    cout << *(ptr+i) <<endl;

    cout <<endl;


}