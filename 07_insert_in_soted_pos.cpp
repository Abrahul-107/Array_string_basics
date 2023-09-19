#include <iostream>
using namespace std;
#define max 100

struct Array
{
    int length;
    int size;
    int a[max];
};

void InsertInSorted(struct Array *arr, int n)
{

    if (arr->length == arr->size)
        return;

    int i;
    for (i = arr->length - 1; i >= 0; i--)
    {
        if (arr->a[i] > n)
        {
            arr->a[i + 1] = arr->a[i];
        }
        if (arr->a[i] < n)
        {
            break;
        }
    }

    arr->a[i + 1] = n;
    arr->length++;
}

void Input(struct Array *arr)
{
    int i;

    for (i = 0; i < arr->length; i++)
    {
        cin >> arr->a[i];
    }
}

void display(struct Array *arr)
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        cout << arr->a[i] << " ";
    }
}

int main()
{
    int n;
    Array arr[max];
    cout << "Enter your size " << endl;
    cin >> arr->size;
    cout << "Enter your length " << endl;
    cin >> arr->length;

    cout << "Enter your elements to array " << endl;
    Input(arr);
    cout << "Enter your number you want to insert " << endl;
    cin >> n;
    InsertInSorted(arr, n);
    display(arr);

    return 0;
}