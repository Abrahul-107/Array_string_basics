#include<iostream>
using namespace std;
// #define max 100



int main()
{
    int arr[] = {6,7,8,9,11,12,15,16,17,18,19};
    int n = sizeof(arr)/sizeof(arr[0]);
    int diff = arr[0]-0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]-i != diff)
        {
           while(diff < arr[i]-i)
           {
           
            cout<<diff+i<<" ";
            diff++;
           }

        }

        

    }
    return 0;

}