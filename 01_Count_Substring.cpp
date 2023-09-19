#include<bits\stdc++.h>
using namespace std;


int main()
{
    int i,j,l1,l2;
    int count = 0, count1=0;
    char str1[100],str2[100];
    cout<<"Enter your string 1 "<<endl;
    gets(str1);
    cout<<"Enter your sub string  "<<endl;
    gets(str2);

    l1 = strlen(str1);
    l2 = strlen(str2);

    for(i=0;i<l1;)
    {
        j = 0;
        count = 0;

        while(str1[i]==str2[j])
        {
            i++;
            j++;
            count++;

        }
        if(count==l2)
        {
            count1++;
            count=0;

        }
        else{
            i++;

        }
        
    }

    printf("%s occurs %d times in %s", str2, count1, str1);

    return 0;


}