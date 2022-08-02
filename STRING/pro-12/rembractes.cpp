/*
After removing bractes: 
MonishaDolai
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100]="((Monisha))Dolai)";
    char str1[100];
    int i,j;
    while(str[i]!='\0')
    {
        if(str[i]!='(' && str[i]!=')')
        {
            str1[j++]=str[i];
        }
        i++;
    }
    str1[j]='\0';
    cout<<" After removing bractes: \n"<<str1;
}