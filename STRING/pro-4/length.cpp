/*Calculate the length of String

Enter the length: Monisha
The lenght is: 7

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[30];
    int i,length=0;
    cout<<"Enter the String: ";
    cin>>ch;
    for(i=0;ch[i]!='\0';i++)
    {
        length++;
    }
    cout<<"The lenght is: "<<length;
    return 0;
}