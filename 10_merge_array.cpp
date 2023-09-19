#include <iostream>
using namespace std;
#define max 100

struct Array
{
    int size;
    int length;
    int a[max];
};



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

    
}