/*
The final string are:
 MonishA DolaI
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100]="Monisha dolai";
    int length=0, i;
    length = strlen(str);
    for(i=0;i<length;i++)
    {
        if(i==0 || i==(length-1))
        {
            str[i]=toupper(str[i]);
        }
        else if(str[i]==' ')
        {
            str[i-1]=toupper(str[i-1]);
            str[i+1]=toupper(str[i+1]);
        }
    }
cout<<"The final string are:\n "<<str;
    return 0;
}