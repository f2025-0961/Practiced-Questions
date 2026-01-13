#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Fahrenheit = (9/5) * Celsius + 32
    cout << "Fahrenheit" << "\t\tCelcius\n";
    for (int i = 0; i < 20; i++)
    {
        float fahrenheit = ((9 / 5.0) * i) + 32;
        cout << setw(10) << left << fahrenheit << " = " << setw(10) << right << i << endl;
    }

    return 0;
}