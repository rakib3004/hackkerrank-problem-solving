

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define o long long int

int main()

{


        int n;

        scanf("%d",&n);

        int a[n];


        int i;
            int max=0,count=0;
        for(i=0;i<n;i++)
        {

          scanf("%d",&a[i]);
              if(a[i]>max)
              {

                  max=a[i];
              }
        }


              for(i=0;i<n;i++)
              {
                  if(a[i]==max)
                  {

                      count++;
                  }


              }

          printf("%d",count);

       return 0;

     }


