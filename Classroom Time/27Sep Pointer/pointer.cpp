#include<iostream>
using namespace std;

int main()
{
    // int num;
    // int num2;
    // cout << &num << endl; //prints address
    // cout << &num2 << endl; //prints address, 4 byte difference between the two variables

    int num1 = 100;
    int num2 = 200;
    int *prt1; //pointer variable
    cout << &num1 << endl; 
    cout << &num2 << endl;
    prt1 = &num1; //the pointer varible has the address of the other variable
    cout << prt1 << endl; //print the mem address 
    cout << *prt1 << endl; //print the VALUE 100

    prt1 = &num2;
    cout << prt1 << endl; //print the mem address 
    cout << *prt1 << endl; //print the VALUE 200

    int *ptr2;
    ptr2 = prt1; //assing direct value(address) of prt1. ptr2= address of num2
}