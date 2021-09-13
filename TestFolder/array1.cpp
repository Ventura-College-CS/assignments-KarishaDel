/*find the elemnt that has increasing order in three consecutive elemnets i.e: 4 < 6 < 7 */

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	const int n=10;
	int num_line[n]{ 5,7,2,4,6,7,10,1,3,9 };
	//int min = num_line[0];
	int temp_min = 0;
	//int skip = 0;

	for (int i = 1; i < n-1; i++) //by changing i < 10 to i < 9 we can avoid the chance of a runtime error
	{
		//for (int j = i + 1; j < 10; j++)
		//{
			if (num_line[i-1] < num_line[i])
			{
				temp_min = num_line[i];
			}
			if (temp_min < num_line[i + 1])
			{
				cout << temp_min;
			}
			
		//}
		//skip++;
		//if (num_line[i - 1] < num_line[i])
		//{
		//	temp_min = i;
		//	min = num_line[i];
		//}
		//cout << "Min: " << skip << endl;
	}

}