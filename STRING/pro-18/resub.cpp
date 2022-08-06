#include<bits/stdc++.h>
using namespace std;
    void replaceSubstring(char st[],char sub[],char new_str[])
{
    int stLen,subLen,newLen;
    int i=0,j,k;
    int flag=0,start,end;
    stLen=strlen(st);
    subLen=strlen(sub);
    newLen=strlen(new_str);
    for(i=0;i<stLen;i++)
    {
        flag=0;
        start=i;
        for(j=0;st[i]==sub[j];j++,i++)
            if(j==subLen-1)
                flag=1;
        end=i;
        if(flag==0)
            i-=j;
        else
        {
            for(j=start;j<end;j++)
            {
                for(k=start;k<stLen;k++)
                    st[k]=st[k+1];
                stLen--;
                i--;
            }
            for(j=start;j<start+newLen;j++)          
             {                
               for(k=stLen;k>=j;k--)
                    st[k+1]=st[k];
                st[j]=new_str[j-start];
                stLen++;
                i++;
            }
        }
    }
}
int main() 
{
    char st[100] = "prepinsta",sub[100] = "insta",new_str[100]="ster ";
    
    replaceSubstring(st,sub,new_str);
    cout<<"The string after replacing substring: "<<st<<endl;
    return 0;
}
