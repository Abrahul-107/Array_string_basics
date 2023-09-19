//FIND SINGLE MISSING ELEMENTS IN N NATURAL ELEMENTS 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {1,2,3,4,5,6,8,9,10};
    int n = sizeof(arr)/sizeof(int);
    int sum=0;
    int s = (n*(n+1))/2;

    for(int i=0;i<n;i++)
    {
        sum = sum+arr[i];

    }

    int missing = s - sum;
    cout<<"Your missing number  is " << missing <<endl;

    return 0;

    
}