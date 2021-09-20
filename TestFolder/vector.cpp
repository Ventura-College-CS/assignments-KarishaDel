#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVec(vector<int>);

int main()
{
    vector<int>::iterator it;
    vector<int> number = {12,15,19,21,25, 27,29,33,37,43};
    printVec(number);
    sort(number.begin(), number.end());
    int new_num;

    cout << "Enter the new number: ";
    cin >> new_num;

    for( it=number.begin(); it< number.end(); it++)
    {
        if(*it > new_num)
        break;
    }

    number.insert(it ,new_num);
    printVec(number);
}

void printVec(vector<int> vec)
{
    vector<int>::iterator it;
        for (it = vec.begin(); it < vec.end(); it++)
    {
        cout << *it << "\t"; // * is a pointer
    }
    cout << endl;

}