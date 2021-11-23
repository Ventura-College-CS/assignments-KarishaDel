#include <iostream>
using namespace std;

template<class T, int size=10>
class ArrayQueue
{
	private:
		T queue[size];
		int front;
		int rear;

	public:
		ArrayQueue() : front(-1), rear(-1) {} 
		
		void enqueue(T el)
		{
			if ( !isFull() )  
			{
				if ( isEmpty())
				{
					front = rear = 0;
					queue[0] = el; 
				}
				else
				{
					// rear = rear + 1;
					rear = (rear + 1) % size;
					queue[rear] = el;
				}
			}
			else
				cout << "Queue is Full\n";
		}
		T dequeue( )
		{
			T el;
			if ( !isEmpty()) 
			{
				el = queue[front];
				front = (front + 1) % size ;
				if ( front == (rear + 1) % size )  
					front = rear = -1;
			}
			else
				cout << " Queue is Empty \n";

			return el;

		}
		int isFull() 
		{
			return ( (rear+1) % size == front ); 

		}
		int isEmpty() 
		{
			return (front == -1 && rear == -1);

		}

};


int main()
{
	ArrayQueue<int, 5> q;

	q.enqueue(3);
	q.enqueue(5);
	q.enqueue(8);
	q.enqueue(2);
	q.enqueue(4);

	if ( q.isFull() )
		cout << "Queue is Full \n";
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;

	q.enqueue(10); // Q is not full. 8, 2, 4, 10

	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;

	if ( q.isEmpty() )
		cout << "Queue is Empty \n";
	else
		cout << " Queue is not Empty\n";
	cout << q.dequeue() << endl;

}