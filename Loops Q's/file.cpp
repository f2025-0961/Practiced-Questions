#include <iostream>
using namespace std;

void factorial(int n);
void sumOfDigits(int digit);
void reverseNum(int number);
void checkPalindrome(int number);
void fibonacci(int num);
void table(int num);
void halfPyramid();

int main()
{
    // factorial(5);
    // sumOfDigits(12);
    // reverseNum(12345);
    // checkPalindrome(121);
    // fibonacci(5);
    // table(10);
    halfPyramid();

    return 0;
}

void factorial(int n)
{
    int fact = 1;
    for (int i = n; i > 0; i--)
    {
        fact = fact * i;
    }
    cout << fact << endl;
}

void sumOfDigits(int number)
{
    // Method 1
    // int sum = 0;
    // string s = to_string(number);
    // for (int i = 0; i < s.length(); i++)
    // {
    //     int x = (s[i] - '0');
    //     sum = sum + x;
    // }
    // cout << "Sum of characters is: " << sum << endl;

    // Method 2
    // int sum = 0;
    // while (number > 0)
    // {
    //     sum += number % 10; // get last digit
    //     number /= 10;       // remove last digit
    // }
    //  cout << "Sum of characters is: " << sum << endl;

    // Method 3
    int sum = 0;
    for (int i = number; i > 0; i = i / 10)
    {
        sum = sum + (i % 10);
    }
    cout << "Sum of characters is: " << sum << endl;
}

void reverseNum(int number)
{
    int reverse = 0;
    while (number > 0)
    {
        reverse = reverse * 10 + number % 10;
        number = number / 10;
    }
    cout << "Reversed number is: " << reverse << endl;
}

void checkPalindrome(int number)
{
    int orignalNumber = number;
    int reverse = 0;
    while (number > 0)
    {
        reverse = reverse * 10 + number % 10;
        number = number / 10;
    }
    if (orignalNumber == reverse)
    {
        cout << "number is palidrome!";
    }
    else
    {
        cout << "number is not palidrome!";
    }
}

void fibonacci(int num)
{
    // 0 1 1 2 3 5 8 13 ✅
    cout << "fibonacci series is: " << endl;
    int firstNum = 0, secondNum = 1, nextNum;
    for (int i = 0; i < num; i++)
    {
        /*  0 + 0 = 0
            0 + 1 = 1
            0 + 1 = 1
            1 + 1 = 2
            1 + 2 = 3
            2 + 3 = 5
            3 + 5 = 8
          */
        cout << firstNum << ",";
        nextNum = firstNum + secondNum;
        firstNum = secondNum;
        secondNum = nextNum;
    }
}

void table(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << num << "*" << i << " = " << num * i << endl;
    }
}

void halfPyramid()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}