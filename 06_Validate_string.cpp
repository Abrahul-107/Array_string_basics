#include <bits/stdc++.h>
using namespace std;
#define max 100

int valid_string(char strr[])
{
    for (int i = 0; strr[i] != '\0'; i++)
    {
        if (!(strr[i] <= 90 && strr[i] >= 65) && !(strr[i] >= 97 && strr[i] <= 122))
            return 0;
    }

    return 1;
}

int main()
{
    char str[max];
    int i;
    gets(str);
    

    if (valid_string(str))
    {
        cout << "valid string ";
    }
    else
    {
        cout << "Not Valid string ";
    }

    return 0;
}