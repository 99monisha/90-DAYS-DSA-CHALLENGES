
/*
Vowel count in a string
Enetr the String: Monisha
3
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100];
    int i;
    cout<<"Enetr the String: ";
    cin>>ch;
    int vowcnt=0;
    for(i=0;ch[i]!='\0';i++)
    {
          if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' ||
          ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U')
          {
            vowcnt++;
          }
    }
    cout<<vowcnt;
    return 0;
}