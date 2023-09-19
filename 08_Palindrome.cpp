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
    int flag = 1;
    for(int i=0;i<len;i++)
    {
       if(str[i]!=str[len-i-1])
       {
        flag = 0;
        break;
       }
       
        
    }

    if(flag==1)
    {
        cout<<"Your string is palindrome";
    }
    else{
        cout<<"Not palindrome";
    }
    

    //cout<<rev;


    return 0;

    
}