/*
B
 66
 A
 AB
 A66
 65
 65B
 6566

*/

#include<bits/stdc++.h>
using namespace std;

void subseq(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;

    }
    char ch=s[0];
    int code=ch;
    string ros=s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);
    subseq(ros,ans+to_string(code));
}

int main()
{
subseq("AB"," ");
    return 0;
}