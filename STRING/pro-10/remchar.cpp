/*

 Remove all character from string except alphabets
Enetr the String: ..@*hghjbn
After removing non alphabetical character the string is: hghjbn
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i,j;
    cout<<"Enetr the String: ";
    getline(cin,str);
    for(i=0;str[i]!='\0';i++)
    {
        while(!((str[i]>='a' && str[i] <= 'z') || (str[i]>='A' && str[i]<='Z') || str[i]=='\0'))
        {
            for(j=i;str[j]!='\0';j++)
            {
                str[j]=str[j+1];
            }
            str[j]='\0';
        }
    }
cout<<"After removing non alphabetical character the string is: "<<str;


    return 0;
}