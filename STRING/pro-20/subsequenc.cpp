/*

Number of common subsequence is: 3

*/

#include<bits/stdc++.h>
using namespace std;
int countSubsequence(char str[], char str1[])
{
    int l1=strlen(str);
    int l2=strlen(str1);
    int cnt[l1+1][l2+1];
    for(int i=0;i<=l1;i++)
    {
        for(int j=0;j<=l2;j++)
        {
            cnt[i][j]=0;
        }
    }
    for(int i=1;i<=l1;i++)
    {
        for(int j=1;j<=l2;j++)
        {
            if(str[i-1]==str1[j-1])
            {
                cnt[i][j]=1+cnt[i][j-1]+cnt[i-1][j];
            }
            else
            {
            cnt[i][j]=cnt[i][j-1]+cnt[i-1][j]-cnt[i-1][j-1];  
            }
        }
    }
    return cnt[l1][l2];
}
int main()
{
    char str[100]="MNO",str1[100]="MN";
    cout<<"Number of common subsequence is: "<<countSubsequence(str,str1);
    return 0;
    }