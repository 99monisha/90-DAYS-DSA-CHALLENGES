/*
best time to buy and sell

Input :

6

7 1 5 3 6 4

Output :

5
*/

#include <bits/stdc++.h>
using namespace std;

int maxProfit(int *prices, int n) {

  int max_sp[n];
  int maximum = INT_MIN;
  for (int i = n - 1; i >= 0; i--) {
     if (prices[i] > maximum) {
       maximum = prices[i];
       max_sp[i] = INT_MIN;
     } 
     else {
       max_sp[i] = maximum;
     }
  }

  int profit = 0;
  for (int i = 0; i < n; i++) {

    if (max_sp[i] != INT_MIN) {
      profit = max(profit, max_sp[i] - prices[i]);
   }

  }
  return profit;
}

int main() {

  int n;
  cin>>n;

  int prices[n];

  for(int i=0; i<n; i++)
    cin>>prices[i];
  int ans = maxProfit(prices, n);
  cout<<ans<<endl;
  return 0;
}