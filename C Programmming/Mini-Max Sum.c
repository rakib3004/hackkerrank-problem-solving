
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define o long long int

int main()

{
 o i,sum=0;

 o a[5];




    o max=0,min=1000000000;

    for(i=0;i<5;i++)
    {

        scanf("%lld",&a[i]);


        sum+=a[i];

        if(a[i]<min)
       {

           min=a[i];
       }

        if(a[i]>max)
       {

           max=a[i];
       }

    }


    printf("%lld ",sum-max);
    printf("%lld ",sum-min);

       return 0;

     }



