#include <iostream>
using namespace std;

void copyString(string &originalstring, string &copy);

void stringLength(string &originalString);

int main()
{
    string s = "i love coding!";
    stringLength(s);
    cout << endl;
    string s1 = "hello";
    string s2 = "";
    copyString(s1, s2);
    cout << s1 << endl;
    cout << s2 << endl;

    return 0;
}

void copyString(string &originalstring, string &copy)
{
    for (int i = 0; i < originalstring.length(); i++)
    {
        copy = copy + originalstring[i];
    }
}

void stringLength(string &originalString)
{
    int length = 0;
    for (char c : originalString)
    {
        length++;
    }
    cout << "Length of string is: " << length << endl;
}