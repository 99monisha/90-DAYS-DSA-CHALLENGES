/*
No. of digits = 5
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
      int num = 20901;
    int digit = 0;
    
    while(num>0){
        digit++;
        num = num/10;
    }
    cout<<"No. of digits = "<< digit;
    return 0;
}