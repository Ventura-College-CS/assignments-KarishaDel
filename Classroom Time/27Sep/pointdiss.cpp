#include <iostream>
using namespace std;

int main()
{
    int x = 50, y = 60, z = 70;
    int *ptr = nullptr;
    cout << x << " " << y << " " << z << endl;
    ptr = &x; //this stores the mem of x

    *ptr *= 10; //takes 50 times 10 = 500
    ptr = &y; //takes mem of y
    *ptr *= 5; //60 times 5
    ptr = &z; //takes mem z
    *ptr *= 2; // 70 time 2
    cout << x << " " << y << " " << z << endl;

}