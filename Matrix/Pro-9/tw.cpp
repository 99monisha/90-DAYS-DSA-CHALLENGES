/*

*/

#include <bits/stdc++.h>
using namespace std;
#define M 4
#define N 5
 
void printCommonElements(int mat[M][N])
{
    unordered_map<int, int> mp;
 
    for (int j = 0; j < N; j++)
        mp[mat[0][j]] = 1;
 
    for (int i = 1; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (mp[mat[i][j]] == i)
            {
                mp[mat[i][j]] = i + 1;
 
                if (i==M-1 && mp[mat[i][j]]==M)
                  cout << mat[i][j] << " ";
            }
        }
    }
}
 
int main()
{
    int mat[M][N] =
    {
        {10, 20, 10, 40, 80},
        {30, 70, 80, 50, 10},
        {80, 70, 70, 30, 10},
        {80, 10, 20, 70, 90},
    };
 
    printCommonElements(mat);
 
    return 0;
}