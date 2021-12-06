#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cout << "Enter 2 integers: " ;
    cin >> x >> y;

    result = GCD(x,y);
    cout << "GCD is" << result << endl;
}

int GCD(int x, int y)
{
    if(x % y ==0)
    retunr y;
    else
        return GCD(y, x % y);
}