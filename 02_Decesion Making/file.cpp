#include <iostream>
#include <cctype>
using namespace std;

void largestOf3Nums(int a, int b, int c);
void checkLeapYear(int year);
void checkVowel(char ch);

int main()
{
    // largestOf3Nums(5, 5, 5);
    cout << endl;
    // checkLeapYear(2020);
    checkVowel('t');

    return 0;
}

void largestOf3Nums(int a, int b, int c)
{
    if (a == b && b == c)
    {
        cout << "All three numbers are equal!";
        return;
    }
    if (a == b)
    {
        cout << "1st and 2nd number are equal!";
        return;
    }
    if (a == c)
    {
        cout << "1st and 3rd number are equal!";
        return;
    }
    if (c == b)
    {
        cout << "2nd and 3rd number are equal!";
        return;
    }

    int largest;
    if (a > b)
    {
        if (a > c)
        {
            largest = a;
        }
    }
    else if (b > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }
    cout << "Largest number is: " << largest << endl;
}

void checkLeapYear(int year)
{
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
    {
        cout << "given year is leap year!";
    }
    else
    {
        cout << "given year is not leap year!";
    }
}

void checkVowel(char ch)
{
    ch = tolower(ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "Character is vowel!";
        break;
    default:
        cout << "Character is consonant!";
        break;
    }
}
