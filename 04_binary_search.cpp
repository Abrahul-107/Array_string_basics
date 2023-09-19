#include<iostream>
using namespace std;

int main()
{
    int arr[10],i,n,key;
    cout<<"Enter your size of your array "<<endl;
    cin>>n;
    cout<<"Enter your elements to array in sorted  "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<"Enter your key you want to search "<<endl;
    cin>>key;

    int high = n-1;
    int low = 0;
    

    while(low<=high)
    {
        int mid = (high + low )/2;
        if(key<arr[mid])
        {
           high = mid-1;

        }
        else if(key==arr[mid])
        {
            cout<<"Your elements found in index "<<mid;
            break;

        }
        else
        {
            low = mid+1;

        }
    }

    return 0;


}