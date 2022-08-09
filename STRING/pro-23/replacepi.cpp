/*
3.143.14pppaaaa3.143.14hjj3.14

*/

#include<bits/stdc++.h>
using namespace std;

void repal(string s)
{
    if(s.length()==0)
    {
        return;
    }
    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        repal(s.substr(2));
    }
    else{
        cout<<s[0];
        repal(s.substr(1));
    }
}

int main()
{
    repal("pipipppaaaapipihjjpi");
    return 0;
}