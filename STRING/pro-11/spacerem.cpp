/*
Remove space from string
Monisha
*/

#include<bits/stdc++.h>
using namespace std;
void remspace(char *str)
{
 int count=0;
    for(int i=0;str[i];i++)
    if(str[i]!=' ')
    str[count++]=str[i];
    str[count]='\0';
    
}
int main()
{
char str[]="M on ish a";
    remspace(str);
   cout<<str;
    return 0;
}