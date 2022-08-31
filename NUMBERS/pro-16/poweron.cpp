 /*
 
 Required Power is 125

 */ 
  
  #include<bits/stdc++.h>
  using namespace std;

 int power(int base, int x){

  int result=1;
  while(x--){
  result *= base;
 }

 return result;
}
  int main()
  {
  int base = 5, x = 3;
  cout<<"Required Power is "<<power(base, x);
  return 0;
}