
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define o long long int

int main()

{




 int n,i,j,k,m;

 scanf("%d",&n);
      for(i=0;i<n;i++)
      {

        k=i+1;
          for(j=0;j<n-k;j++)
          {

              printf(" ");
          }
          for( ; j<n;j++)
          {

              printf("#");
          }

          printf("\n");

      }


       return 0;

     }



