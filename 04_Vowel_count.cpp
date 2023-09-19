#include <bits/stdc++.h>
using namespace std;
#define max 100

int main()
{
    char str[max];
    cout << "Enter your string " << endl;
    gets(str);
    
    int c = 0,v=0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u' || str[i] == 'i' ||
         str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            c++;
        }
        else if(str[i]>=65&&str[i]<=90 || str[i]>=97&&str[i]<=122)
        v++;
    }

    cout << c<<endl;
    cout<<v;
}