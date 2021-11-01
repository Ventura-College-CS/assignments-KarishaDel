#ifndef 	STACK_H
#define 	STACK_H

#include <vector>
using namespace std;

template <class T, int capacity = 30> //class is a kind of data type that cannot be detemind
// int capacity = 30 is default value
class Stack
{

private:
	//vector<int>  pool; //when you want to use double then you must change the int to double
    vector <T> pool;
public:
	Stack()
	{
	}	
	Stack(int size)
	{
		pool.reserve(capacity);
	}
	T pop() 
	{
		T val = pool.back();
		pool.pop_back();
		return val;
	}
	void push(T v)
	{
		pool.push_back(v); 
	}
	T isEmpty() const
	{
		return pool.empty();
	}
	T topEl() const
	{
		return pool.back();
	}


};

#endif 

