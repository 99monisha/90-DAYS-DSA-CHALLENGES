/*
The String is: madam palindrome
The String is: papa not palindrome
*/

#include<bits/stdc++.h>
using namespace std;
void lower(char ch[])
{
    int i=0;
    while (ch[i]!='\0')
    {
        if(ch[i]>64 && ch[i]<91)
ch[i]+=32;
i++;
    }
    
}
void palin(char ch[])
{
    int l=0;int h=strlen(ch)-1;
    lower(ch);
    while(h>l)
    {
        if(ch[l++]!=ch[h--])
        {
            cout<<"The String is: "<<ch<<" not palindrome";
            return;
        }
    }
    cout<<"The String is: "<<ch<<" palindrome";
}
int main(){
char ch1[50]="madam";
palin(ch1);
cout<<endl;
char ch2[50]="papa";
palin(ch2);

    return 0;
}
