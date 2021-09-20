#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVec(vector<int>);

int main()
{
    vector<int> number = {10,13,5,7,25};
    printVec(number);
    sort(number.begin(), number.end());

}

void printVec(vector<int> vec)
{
    vector<int>::iterator it;
        for (it = vec.begin(); it < vec.end(); it++)
    {
        cout << *it << endl; // * is a pointer
    }
}