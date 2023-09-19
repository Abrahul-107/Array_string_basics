#include <iostream>
using namespace std;
#define max 100

void insertAtGiven(int *arr, int n)
{
    int num, pos;

    cout << "Enter your element you want to insert ";
    cin >> num;
    cout << "Enter your position ";
    cin >> pos;

    for (int i = n; i >= pos - 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = num;
    n++;
}

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[max], i, n;
    cout << "Enter your size your want " << endl;
    cin >> n;
    cout << "Enter your elements to array " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertAtGiven(arr, n);
    display(arr, n);

    return 0;
}