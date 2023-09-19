#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    cout<<"Enter your string "<<endl;
    gets(str);

    int i=0,len=0;
    while(str[i++]!='\0') len++;
    cout<<"Your string length is " <<len<<endl;

    return 0;


}