#include <iostream>
using namespace std;

int main()
{
    double population; // changed to double
    int days;
    double increase;

    do
    {
        cout << "Enter population:\n";
        cin >> population;
    } while (population < 2);

    do
    {
        cout << "Enter days:\n";
        cin >> days;
    } while (days < 1);

    do
    {
        cout << "Enter daily increase (%):\n";
        cin >> increase;
    } while (increase < 0);

    cout << "Day 1 population: " << population << endl;

    for (int i = 2; i <= days; i++)
    {
        population += population * (increase / 100);
        cout << "Day " << i << " population: " << population << endl;
    }

    return 0;
}
