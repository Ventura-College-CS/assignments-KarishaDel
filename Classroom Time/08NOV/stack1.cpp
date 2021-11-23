#include "Stack.hpp"
#include <iostream>
using namespace std;

int main()
{
	Stack<double, 10> s1;
	Stack<double> s2(20);
	Stack<double> s3;
	
	
	s1.push(10.01);
	s1.push(20.002);
	s1.push(30.003);

	cout << s1.pop() << endl; 
	cout << s1.pop() << endl; 
	cout << s1.pop() << endl; 
}
