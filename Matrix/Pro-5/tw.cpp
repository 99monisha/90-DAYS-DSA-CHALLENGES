/*


*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
      int r = 3, c = 3;
      int m[3][3]= { {1,3,5}, {2,6,9}, {3,6,9}};
      int min = INT_MAX, max = INT_MIN;

      for (int i=0; i< r; i++)
     {
           if (m[i][0] < min) min = m[i][0]; if (m[i][c-1] > max)
              max = m[i][c-1];
     }

     int desired = (r * c + 1) / 2;
     while (min < max)
     {
            int mid = min + (max - min) / 2;
            int place = 0;

            for (int i = 0; i < r; ++i)
                    place += upper_bound(m[i], m[i]+c, mid) - m[i];
                    if (place < desired)
                        min = mid + 1;
                    else
                        max = mid;
      }
      cout << "Median is " << min ;
      return 0;
}