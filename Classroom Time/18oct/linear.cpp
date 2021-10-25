#include    <iostream>
using namespace std;

int     linearSearch(int [], int, int);

int main()
{
    const int N= 10;
    int array[N] = {25, 10, 15, 30, 35, 40, 45, 55, 20, 50};
	int target;
    int comp = 0;


	cin >> target;

	for(int i=0;i<N;i++)
	{
        comp++;
		if ( target == array[i] )
        {
            // cout << " found " << target << " at the index " << i << endl;
            // break;

            cout << " found " << target << " with " << comp << "comparisons" << endl; //how many times it comares the numbers
            break;
        }
        
			
	}
}