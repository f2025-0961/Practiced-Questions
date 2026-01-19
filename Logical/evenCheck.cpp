#include <iostream>
using namespace std;

int main()
{

    int n = 5;
    int isEven[2] = {1, 0};
   // bool even = isEven[n & 1];

    bool even = !(n & 1);

    if (even)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }

    return 0;
}