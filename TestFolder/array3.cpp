#include<iostream>
#include <cstring>
using namespace std;

int main() 
{
    // string mainstr = "Chocolate";
    // string substr = "col";

    // int spot;

    // spot = mainstr.find(substr);

    // cout << "Found in spot: " << spot << endl;

    char mainstr [10] = "chocolate";
    char substr[10] = "col";
    int i, j;

    cout << strlen(substr) << endl;
    cout << strlen(mainstr) << endl;

    for(int i = 0; i <= strlen(mainstr) - strlen(substr); i++)
    {
        for(int j = 0; j < strlen(substr); j++)
        {
            if(substr[j] == mainstr[i+j]);
            break;
        }
         if (j == strlen(substr))
         cout << "matched" << i << endl;

    }

}
