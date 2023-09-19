#include<bits/stdc++.h>
using namespace std;
#define max 100

int main()
{
    char str[max];
    cout<<"Enter your string "<<endl;
    cin>>str;
    char rev[max];
    int i=0,len=0;
    while(str[i++]!='\0') len++;
    int j =0;
    for(int i=len-1;i>=0;i--)
    {
        rev[j++] = str[i];
        
    }
    rev[j] = '\0';

    cout<<rev;


    return 0;

    
}