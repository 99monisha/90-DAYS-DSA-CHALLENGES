/*
Fact 8 : 40320
*/

#include<iostream>
using namespace std;

int getFactorial(int num)
{
    if(num == 0)
        return 1;
        
    return num * getFactorial(num-1);
}
int main ()
{
    int num = 8;
    
    int fact = getFactorial(num);
    
    cout << "Fact " << num << " : " << fact;
    
    return 0;
}