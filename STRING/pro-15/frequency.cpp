/*
The frequency of: a is 1
The frequency of: h is 1
The frequency of: i is 1
The frequency of: m is 1
The frequency of: n is 1
The frequency of: o is 1
The frequency of: s is 1

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100]="monisha";
    int i;
    int freq[200]={0};
    for(i=0;str[i]!='\0';i++)
    {
        freq[str[i]]++;
    }
    for(i=0;i<200;i++)
    {
        if(freq[i]!=0)
        {
            cout<<"The frequency of: "<<char(i)<<" is "<<freq[i]<<endl;
        }
    }

    return 0;
}