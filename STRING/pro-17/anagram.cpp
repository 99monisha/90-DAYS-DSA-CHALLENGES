/*
Enter First String: listen
Enter Second String: silent
Strings are anagram.
*/


#include<iostream> 
using namespace std;
int main()
{
    char str1[100],str2[100];
    int first[26]={0}, second[26]={0}, c=0, flag=0;
       cout<<"Enter First String: ";
    cin>>str1;
    cout<<"Enter Second String: ";
   cin>>str2;
    while(str1[c] != '\0')
    {
        first[str1[c]-'a']++;
        c++;
    }
     
    c=0;
  
    while(str2[c] != '\0')
    {
        second[str2[c]-'a']++;
        c++;
    }
   
    for(c=0;c<26;c++)
    {
        if(first[c] != second[c])
            flag=1;
    }
    if(flag == 0)
    {
        cout<<"Strings are anagram.";
    }
    else
    {
        cout<<"Strings are not anagram.";
    }
    return 0;
  
}