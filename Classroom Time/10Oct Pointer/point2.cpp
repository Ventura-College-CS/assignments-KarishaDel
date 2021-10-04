#include <iostream>
using namespace std;

int main()
{
	int 	*ptr;

//how to access the first pointer? You cant. 
//its called dangling poniter	
    ptr = new int;
    *ptr = 20;
    cout << "Value:" << *ptr << endl;

//if you dont need the mem spcae use this
    delete ptr; 
//this delets the 20 so it leave the memory slot open

    ptr = new int;
    *ptr = 30;
    cout << "Value" << *ptr << endl;

}