#include <iostream>
using namespace std;

int sum(int (ar[4]))
{   
    int s= 0;
    for (int i = 0; i < 4; i++)
    {
        s= s+ar[i];
    }
    
    return s;
}

int main()
{
    int array[4]={1,3,4,5};
    int x = sum(array);
    cout<<x;
    return 0;
}