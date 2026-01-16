#include <iostream>
using namespace std;

void copyString(string &originalstring, string &copy);

int main()
{
    string s = "i love coding!";
    int length = 0;
    char ch;
    while (ch == '\0')
    {
        length++;
    }
    cout << "length of string is: " << length << endl;
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