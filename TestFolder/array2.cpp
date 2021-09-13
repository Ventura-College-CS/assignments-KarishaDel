/* Reverse the order of this array*/
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	const int n =10;
	int num[n]{ 5, 7, 2, 4, 6, 7, 10, 1, 3, 9 };
	int bk_num[n];

	for (int i = 0; i < n; i++)
	{
		bk_num[i] = num[n-i-1];
	 }
	for (int i = 0; i < n; i++)
	{
		cout << bk_num[i] << endl;

	}
}