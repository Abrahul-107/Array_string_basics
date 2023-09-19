#include <bits/stdc++.h>
using namespace std;
#define max 100

int main()
{
    string str[max];
    int n, i;
    cout << "Enter your array size you want " << endl;
    cin >> n;
    cout << "Enter your elements " << endl;
    for (int i = 0; i < n; i++)
    {

        cin >> str[i];
    }
    string ans = "";
    for(int i=0;i<str[i].length();i++)
    {
        char ch = str[0][i];
        bool match = true;
        for(int j=1;j<n;j++)
        {
            if(ch!=str[j][i])
            {
                match = false;
                break;
            }
        }

        if(match==false)
        {
            break;
        }
        else{
            ans.push_back(ch);
        }

    }

    cout<<ans;
    

    return 0;
}