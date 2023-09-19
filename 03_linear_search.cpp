#include<iostream>
using namespace std;

int main()
{
    int arr[10],i,n,key;
    cout<<"Enter your size of your array "<<endl;
    cin>>n;
    cout<<"Enter your elements to array "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<"Enter your key you want to search "<<endl;
    cin>>key;

    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"Your key is lie in index number "<< i ;
        }
        

    }

    return 0;

}