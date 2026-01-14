#include <iostream>
#include <unordered_set>
using namespace std;

void minMax(int array[], int size);
void reverseArray(int array[], int size);
void repeatingNum(int array[], int size);
void distinctElements(int array[], int size);

int main()
{
    int arr[8] = {0, 6, 6, 8, 9, 9, 9, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    // minMax(arr, size);
    // reverseArray(arr, size);
    // for (int x : arr)
    // {
    //     cout << x << " ";
    // }
    // repeatingNum(arr, size);

    distinctElements(arr, size);
    return 0;
}

void minMax(int array[], int size)
{
    int min = array[0];
    int max = array[0];

    for (int i = 0; i < size; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
        if (max < array[i])
        {
            max = array[i];
        }
    }
    cout << "maximum is: " << max << " and minimum is: " << min << endl;
}

void reverseArray(int array[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        //   Method 01
        // swap(array[start], array[end]);

        //   Method 02
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        start++;
        end--;
    }
}

void repeatingNum(int array[], int size)
{

    int repeatedNumber;
    int repeatingTimes = 0;
    int counter = 1;
    for (int i = 0; i < size; i++)
    {
        int x = array[i];
        if (i > 0 && repeatedNumber == x)
        {
            continue;
        }
        for (int j = 0; j < size; j++)
        {
            if (x == array[j] && (i != j))
            {
                repeatedNumber = x;
                counter++;
            }
        }
        (counter == 1) ? counter = 1 : repeatingTimes = counter;
        // cout << "number: " << x << " repeats: " << counter << " times \n";
    }
    //  cout << "No number is repeating in array!\n";
    cout << repeatedNumber << " is repeating: " << repeatingTimes << " times" << endl;
}

void distinctElements(int array[], int size)
{
    unordered_set<int> s;
    for (int i = 0; i < size; i++)
    {
        s.insert(array[i]);
    }
    cout << "Number of unique elements: " << s.size();
}
