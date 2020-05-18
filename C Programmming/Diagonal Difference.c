

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define o long long int

int main()

{


  int  n,sum1=0,sum2=0;

     scanf("%d",&n);


  int  a[n][n];

        int p=n-1;
  int   i,j;


     for(i=0;i<n;i++)
     {

         for(j=0;j<n;j++)
         {
            scanf("%d",&a[i][j]);


         }

     }


    for(i=0;i<n;i++)

    {
    j=i;

    sum1+=a[i][j];

    sum2+=a[p-i][j];


    }

    int l=abs(sum1-sum2);

        printf("%d",l);

       return 0;

     }


