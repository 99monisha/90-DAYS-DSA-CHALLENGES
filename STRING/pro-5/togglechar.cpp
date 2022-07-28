/*

Toggle each character in a string 
Enter the string: MoniSHA
Toggle string are: mONIsha

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100];
    int i;
    cout<<"Enter the string: ";
    cin>>ch;
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>='A' && ch[i]<='Z')
        {
        ch[i]=ch[i]+32;
    }
    else if(ch[i]>='a' && ch[i]<='z')
    {
         ch[i]=ch[i]-32;
    }
    }
    cout<<"Toggle string are: "<<ch;
     


    return 0;
}