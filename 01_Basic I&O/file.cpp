#include <iostream>
using namespace std;

float convertTemp(char type, float temp);
void demonstrateIncreDecre();

int main()
{
    float temp = convertTemp('F', 99.5);
    cout << temp << endl;
    demonstrateIncreDecre();

    return 0;
}

float convertTemp(char type, float temp)
{
    // C → F: F = (C × 9/5) + 32
    //  F → C: C = (F − 32) × 5/9
    if (type == 'F')
    {
        return ((temp - 32) * 5 / 9.0);  // calculated in C
    }
    else
    {
        return (((9 / 5.0) * temp) + 32); //calculated in F
    }
}

void demonstrateIncreDecre()
{
    int a = 100;
    // pre-increment
    int x = ++a;
    cout << "Original value of a is 100 but \n pre incre " << x << endl;
    a = 100;
    // post-increment
    int y = a++;
    cout << "post incre " << y << endl;
    // similarly work decrement operator
}