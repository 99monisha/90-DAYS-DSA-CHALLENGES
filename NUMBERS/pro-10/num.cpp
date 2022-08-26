/*
No. of digits = 5
*/



#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int num = 20901;
  int digit = floor (log10 (num)) + 1;
  cout << "No. of digits = " << digit;
   return 0;
 
}