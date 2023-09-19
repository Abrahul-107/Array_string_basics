#include <bits/stdc++.h>
using namespace std;
#define max 100

int main()
{
    char str[max];
    cout << "Enter your string " << endl;
    gets(str);
    
    int c = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
       if(str[i] == ' ' && str[i-1]!=' ')
       {
        c++;
       }
       
    }

    cout << c+1 <<endl;
    return 0;

}