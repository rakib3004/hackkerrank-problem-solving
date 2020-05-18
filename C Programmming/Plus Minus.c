

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define o long long int

int main()

{


  int  n,a=0,b=0,c=0;

     scanf("%d",&n);


  int  p[n];


  int   i,j;


     for(i=0;i<n;i++)
     {


            scanf("%d",&p[i]);


          if(p[i]>0)
          {

              a++;
          }

          else if(p[i]<0)
          {

              b++;
          }

          else
          {

              c++;
          }
     }


     double a1,a2,a3;

     a1=(double)a/n;
     a2=(double)b/n;
     a3=(double)c/n;

     printf("%f\n",a1);
     printf("%f\n",a2);
     printf("%f\n",a3);






       return 0;

     }


