#include <iostream>
#include <vector>
using namespace std;



template<class T, int size = 100>
class VectorQueue
{
    private:
		vector<T> q;
        // T vector<size>;
        // int front;
        // int rear;
    
    public:
        // VectorQueue() : front(-1), rear(-1) {}
        VectorQueue()  { q.reserve(size) ; }
        void enqueue(T el)
        {
			if ( !isFull() )
            	q.push_back(el);

			// if(!isFull())
            // {
            //     if(isEmpty())
            //     {
            //         front = rear = 0;
            //         q<0> = el;
            //     }
            //     else
            //     {
            //         rear = rear + 1;
            //         q<rear> = el;
            //     }
            // }
            // else
            //     cout << "Queue is full \n";
        }
        T dequeue()
        {
            T el;
            if (!isEmpty())
            {
                // el = q<front>;
                el = q.front();
				q.erase(q.begin());
                // front += 1;
                // if(front == rear + 1)
                //     front = rear = -1;
            }
            else
                cout << "Queue is Empty \n";
        
            return el;
        }
        int isFull()
        {
			if ( q.size() == size)
				return 1;
			else 
				return 0;
        }
        int isEmpty()
        {
            return q.empty();
        }
};


int main()
{
	VectorQueue<int, 10> vq1;


}