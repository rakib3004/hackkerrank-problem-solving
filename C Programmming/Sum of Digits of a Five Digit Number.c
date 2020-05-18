#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,n;

    scanf("%d",&n);

    int sum=0,p;
         for(i=1;i<=5;i++)
         {
            p=n%10;
            sum+=p;
            n/=10;

         }
         printf("%d",sum);
    return 0;
}

