/*
print common elements in three arrays

Input :

3
1  5  5 
5
3  4  5  5  10
4
5  5  10  20 

Output
5 5
*/

#include <stdio.h>
int main()
{
  int n1;
  scanf("%d", &n1);

  int ar1[n1];
  for(int i=0; i<n1; i++) 
     scanf("%d", &ar1[i]);

  int n2;
  scanf("%d", &n2);

  int ar2[n2];
  for(int i=0; i<n2; i++) 
    scanf("%d", &ar2[i]);

  int n3;
  scanf("%d", &n3);

  int ar3[n3];
  for(int i=0; i<n3; i++) 
    scanf("%d", &ar3[i]);

  printf("Common Elements are ");

  for(int i=0; i<n1; i++){

      int flag = 0;
      for(int j=0 ; j<n2; j++){

         if(ar1[i]==ar2[j])
         { 

            for(int k=0; k<n3; k++){

              if(ar2[j]==ar3[k])
              {
                flag=1;
                k++;
                break;
              }
           }

           j++;
           break;
          }
     }

     if(flag)
     printf("%d ", ar1[i]);
  }
return 0;
}