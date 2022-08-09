/*

Move from A to B
Move from A to C
Move from B to C
Move from A to B
Move from C to A
Move from C to B
Move from A to B

*/

#include<bits/stdc++.h>
using namespace std;

void ToweofHanoi(int n,char src,char desc,char help)
{
    if(n==0)
    {
        return;
    }
    ToweofHanoi(n-1,src,help,desc);
    cout<<"Move from "<<src<<" to "<<desc<<endl;
    ToweofHanoi(n-1,help,desc,src);
}


int main()
{
    ToweofHanoi(3,'A','B','C');
    return 0;
}