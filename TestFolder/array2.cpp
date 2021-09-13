/* Reverse the order of this array*/
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int num[10]{ 5, 7, 2, 4, 6, 7, 10, 1, 3, 9 };
	int bk_num[10];

	for (int i = 0; i < 10; i++)
	{
		bk_num[i] = num[10-i-1];
	 }
	for (int i = 0; i < 10; i++)
	{
		cout << bk_num[i] << endl;

	}
}