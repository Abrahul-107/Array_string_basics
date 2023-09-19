#include<iostream>
using namespace std;
#define max 100

int main()
{
    int arr[max],i,n,pos;
    cout<<"Enter your size you want "<<endl;
    cin>>n;
    cout<<"Enter your elements to araray ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<"Enter your position you want to delete ";
    cin>>pos;

    for(i=pos-1;i<n;i++)
    {
        arr[i] = arr[i+1];

    }
    n--;

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<< " ";

    }

    return 0;
    

}