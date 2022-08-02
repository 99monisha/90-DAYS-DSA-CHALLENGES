/*
d  f  g 
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100]="aaabbbgfdrrr";
    int i;
    int freq[200]={0};
    for(i=0;str[i]!='\0';i++)
    {
        freq[str[i]]++;
    }
    for(i=0;i<200;i++)
    {
        if(freq[i]==1)
        {
            cout<<char(i)<<"  ";
        }
    }

    return 0;
}