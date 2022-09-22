/*
find Next Permutation
bac
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s = "abc" ;

  bool val= next_permutation(s.begin(), s.end());

  if (val == false)
   cout << "No Word Possible" << endl;
  else
   cout << s << endl;

  return 0;
}