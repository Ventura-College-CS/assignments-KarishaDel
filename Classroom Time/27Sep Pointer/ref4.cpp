// reference variable as a return value

#include <iostream>
using namespace std;

int num = 100;
int &setValue(void);

int main()
{
    setValue() = 10; //just a spce w
}

int &setValue()
{
    return num;
}

