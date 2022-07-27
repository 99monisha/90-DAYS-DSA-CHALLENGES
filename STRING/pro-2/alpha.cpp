/*Check the character is alphabet or not

0 is not a alphabet


*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch='0';
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') )
    cout<<ch<<" is a alphabet";
    else
    cout<<ch <<" is not a alphabet";    
    return 0;
}