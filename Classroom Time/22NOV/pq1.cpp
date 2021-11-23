#include <iostream>
#include <queue>

using namespace std;


int main()
{
	priority_queue<int> pq1;

    pq1.push(20);
    pq1.push(30);
    pq1.push(10);

    while (!pq1.empty())
    {
        cout << "pop value" << pq1.top() << endl;
        pq1.pop();
    }
    priority_queue<int, deque<int>, greater<int> > pq2;

	pq2.push(20);
	pq2.push(30);
	pq2.push(10);

	while( !pq2.empty())
	{
		cout << " pop value" << pq2.top() << endl;
		pq2.pop();
	}
}
