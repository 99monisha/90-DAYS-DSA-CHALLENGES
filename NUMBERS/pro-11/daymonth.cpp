/*
Number of days is 31
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int month = 12, year=2012;
    
    if((month==2) && ((year%400==0) || ((year%100!=0)&&(year%4==0)))){
        cout<<"Number of days is 29";
    }
    else if(month==2){
        cout<<"Number of days is 28";
    }
    else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
        cout<<"Number of days is 31";
    }
    else if(month==4 || month==6 || month==9 || month==11){
        cout<<"Number of days is 30";
    }
    else cout<<"Invalid month";
    
    return 0;
}