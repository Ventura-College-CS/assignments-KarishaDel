#include <iostream>
#include <queue>
#include <deque> 
#include <list> //for list we can add elements between elemnets
using namespace std;


int main()
{
    list<int> list1(4, 200);

	queue<int, list<int> > lq(list1);
	cout << " Dequeued : " << lq.front() << endl;
	lq.pop();
	cout << " Dequeued : " << lq.front() << endl;
	lq.pop();
}    
    