
#include<stdio.h>
#define o long long int

int main()

{


     o n,sum=0;

     scanf("%lld",&n);


     o a[n];


     o i;


     for(i=0;i<n;i++)
     {


         scanf("%lld",&a[i]);
         sum+=a[i];
     }

      printf("%lld",sum);

       return 0;

     }



