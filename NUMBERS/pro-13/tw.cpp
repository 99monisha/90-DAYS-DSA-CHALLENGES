#include<bits/stdc++.h>
using namespace std;
void sieve(bool primes[], int x)
{
    primes[1] = false;
 
    for (int i=2; i*i <= x; i++)
    {
        if (primes[i] == true)
        {
            for (int j=2; j*j <= x; j++)
                primes[i*j] = false;
        }
    }
}
 
int nDivisors(bool primes[], int x, int a, int b, int n)
{

    int result = 0;
 
    vector<int>  v;
    for (int i = 2; i <= x; i++)
        if (primes[i] == true)
            v.push_back (i);
 
    for (int i=a; i<=b; i++)
    {
        int temp = i;
 
        int total = 1;
        int j = 0;
 
        for (int k = v[j]; k*k <= temp; k = v[++j])
        {
            int count = 0;
 
            while (temp%k == 0)
            {
                count++;
                temp = temp/k;
            }
 
            total = total*(count+1);
        }
 
        if (temp != 1)
            total = total*2;
 
        if (total == n)
            result++;
    }
    return result;
}
 
int countNDivisors(int a, int b, int n)
{
    int x = sqrt(b) + 1;
 
    bool primes[x];
 
    memset(primes, true, sizeof(primes));
    sieve(primes, x);
 
    return nDivisors(primes, x, a, b, n);
}
 

int main()
{
    int a = 1, b = 7, n = 2;
    cout << countNDivisors(a, b, n);
    return 0;
}