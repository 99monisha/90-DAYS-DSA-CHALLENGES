/*
Enter numerator and denominator of first number : 3 4
Enter numerator and denominator of second number: 5 6
3/4 + 5/6 = 19/12
*/


#include<bits/stdc++.h>
using namespace std;
int findGCD(int n1, int n2)
{
    int gcd;
    for(int i=1; i <= n1 && i <= n2; i++)
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    return gcd;
}
int main()
{
   int num1,den1;
    cout << "Enter numerator and denominator of first number : "; cin >> num1 >> den1;
     int num2,den2;
    cout << "Enter numerator and denominator of second number: "; cin >> num2 >> den2;
    int lcm = (den1*den2)/findGCD(den1,den2);
    int sum=(num1*lcm/den1) + (num2*lcm/den2);
    int num3=sum/findGCD(sum,lcm);
    lcm=lcm/findGCD(sum,lcm);
    cout<<num1<<"/"<<den1<<" + "<<num2<<"/"<<den2<<" = "<<num3<<"/"<<lcm;
return 0;
}