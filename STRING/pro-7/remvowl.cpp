/*
Remove Vowels From String
Enter String: Monisha
After removing vowels: Mnsh
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100];
    cout<<"Enter String: ";
    cin>>ch;
    int length=strlen(ch);
    for(int i=0;i<length;i++)
    {
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' ||
          ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U')
          {
             for(int j=i;j<length;j++)
             {
                ch[j]=ch[j+1];
             }
             i--;
             length--;
          }
    }
    cout<<"After removing vowels: "<<ch;
    return 0;
}