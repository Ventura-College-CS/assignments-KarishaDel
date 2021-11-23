#include <iostream>
#include <queue>
#include <deque> 
#include <list> //for list we can add elements between elemnets
using namespace std;



int main()
{
	queue<int> q1;

    for(int i=0; i<5; i++)
        q1.push(i*10);
    for(int i=0; i<5; i++)
    {
        cout << q1.front() << endl;
        q1.pop();
    }

    queue<int, list<int> > q2;

    for(int i=0; i<5; i++)
        q2.push(i*10);
    for(int i=0; i<5; i++)
    {
        cout << q2.front() << endl;
        q2.pop();
    }

    list<int> list1(5,100); //5 100's (100, 100, 100, 100, 100)
    queue<int, list<int> > q3(list1); // qe= (list1 which is 5 100's)
    
    for(int i=0; i<5; i++)
    {
        cout << q3.front() << endl;
        q3.pop();
    }

    deque<int> dq1;
    dq1.push_back(10);
}
