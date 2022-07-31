/*
Reverse the string
Before reverse: Monisha
After reverse: ahsinoM
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="Monisha";
    cout<<"Before reverse: "<<str;
    reverse(str.begin(),str.end());
    cout<<"After reverse: "<<str;
    return 0;
}