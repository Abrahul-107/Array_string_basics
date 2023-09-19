#include<bits/stdc++.h>
using namespace std;
#define max 100

int main()
{
    int arr[max],n;
    cout<<"Enter your size "<<endl;
    cin>>n;
    cout<<"Enter your elements to your array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int s ,sum=0;
    cout<<"Enter your sum "<<endl;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        sum = arr[i];
        if(sum==s) cout<<"yes";
        for(int j=0;j<n;j++)
        {
            sum = sum + arr[j];
            if(sum==s)
            cout<<"Yes";

        }
    }

    return 0;

}