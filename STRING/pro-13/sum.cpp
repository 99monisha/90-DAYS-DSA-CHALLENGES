/*
Sum of Digits are: 23
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100]="3mon7isha670";
    int i,sum=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            sum+=(str[i]-'0');
        }
    }
    cout<<"Sum of Digits are: "<<sum;
    return 0;
}