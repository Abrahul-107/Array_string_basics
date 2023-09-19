#include <iostream>
using namespace std;
#define max 100

int main()
{
    int arr[max], i, sum = 0, n, avg;
    cout << "Enter your size you want " << endl;
    cin >> n;
    cout << "Enter your elements to araray ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    avg = sum / (n - 1);

    cout << "Your sum is " << sum << endl;
    cout << "Your avg is " << avg << endl;

    return 0;
}