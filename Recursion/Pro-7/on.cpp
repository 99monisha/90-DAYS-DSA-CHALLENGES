/*

*/

#include<iostream>
using namespace std;
int main ()
{
    int num = 6, fact = 1;
    if(num < 0)
        cout << "Not Possible";
    else
    {
        for(int i = 1; i <= num; i++)
            fact = fact * i;
    }
    
    cout << "Fact " << num << ": " << fact;

    return 0;
}