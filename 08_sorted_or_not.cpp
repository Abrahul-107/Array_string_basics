#include <iostream>
using namespace std;
#define max 100

struct Array
{
    int size;
    int length;
    int a[max];
};

int SortedOrNot(struct Array *arr)
{
    for (int i = 0; i < arr->length-1; i++)
    {
        if (arr->a[i] > arr->a[i + 1])
        {
            return 0;
        }
    }
    return 1;
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
    cout << "Enter your reserved size " << endl;
    cin >> arr->size;
    cout << "Ennter your length " << endl;
    cin >> arr->length;
    cout << "Enter your elements to array " << endl;
    Input(arr);

    // cout<<"Enter your number you want to insert "<<endl;
    // cin>>n;
    // SortedOrNot(arr);

    if (SortedOrNot(arr) == 1)
    {
        cout << "Your array is sorted "<<endl;

        display(arr);
    }
    else
    {
        cout << "Your array is not sorted ";
    }
}