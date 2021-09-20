#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVec(vector<int>);
void insertVec(vector<int>, int);
void delVec(vector<int>, int);

int main()
{
    vector<int>::iterator it;
    vector<int> number = {12,15,19,21,25, 27,29,33,37,43};
    printVec(number);
    sort(number.begin(), number.end());
    int new_num, bad_num;
    
    cout << "Enter the new number: ";
    cin >> new_num;
    insertVec(number, new_num);
   

    cout << "Enter a number to erase: ";
    cin >> bad_num;
    delVec(number, bad_num);
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

void insertVec(vector<int> number, int new_num)
{
    vector<int>::iterator it;

    for( it=number.begin(); it< number.end(); it++)
    {
        if(*it > new_num)
        break;
    }
    number.insert(it ,new_num);
    printVec(number);
}

void delVec(vector<int> number, int bad_num)
{
    vector<int>::iterator it;

    for( it=number.begin(); it< number.end(); it++)
    {
        if(*it == bad_num)
        break;
    }
    if (it == number.end())
    {
        cout << "Number not available" <<endl;
    }
    else
    {
        number.erase(it);
    }
    printVec(number);
}