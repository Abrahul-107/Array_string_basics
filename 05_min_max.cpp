#include <iostream>
using namespace std;

int main()
{
    int arr[10], i, n, min, max;
    cout << "Enter your size of your array " << endl;
    cin >> n;
    cout << "Enter your elements to array in sorted  " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    max = arr[0];
    min = arr[0];

    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "Your max is " << max << endl;
    cout << "Your min is " << min << endl;

    return 0;
}