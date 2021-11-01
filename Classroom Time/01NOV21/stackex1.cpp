#include "Stack.hpp"
#include <iostream>
using namespace std;

int main()
{
    //Stack s1(10);
	Stack<double> s1(10); //this allows int to be assing to T OR ANY DATA TYPE and the capacity is 10
    Stack<double> s2(20); //IT WONT USE THE CAPASITY but it will use 20
    Stack<double> s3; //will use the capacity

	s1.push(10.01);
	s1.push(20.002);
	s1.push(30.003);

	cout << s1.pop(); 
	cout << s1.pop(); 
	cout << s1.pop(); 
}
