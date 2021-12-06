#include <iostream>
using namespace std;

int countChar(string, char);

int main()
{
	string name="aaabbbcccdddd";
	int cnt;
	char search = 'b';

	cnt = countChar(name, search);
	cout << "Result " << cnt << endl; //what element spot
    cout << nsme.substr(1) <<endl;


}
int countChar(string name, char search)
{
  	
	  	if ( name.size() == 0)
	  		return 0;
		else
		{
			if (name[0] == search)
				return 1 + countChar(name.substr(1), search);
			else
				return countChar(name.substr(1), search);

		} 
}

// int countChar(string name, char search)
// {
//   	int cnt=0;
// 	int i=0;
// 	while(i < name.size()) //stops this recursion if name.size() == 0
// 	{
// 		if (name[i] == search)
// 			cnt += 1;
// 		i++;
// 	}
// 	return cnt;
// }