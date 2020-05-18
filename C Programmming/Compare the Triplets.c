
#include<stdio.h>


int main()

{


     int a1=0,b1=0,sum=0;




     int a[3],b[3];


     int i;


     for(i=0;i<3;i++)
     {


         scanf("%d",&a[i]);

     }

      for(i=0;i<3;i++)
     {


         scanf("%d",&b[i]);

     }

      for(i=0;i<3;i++)
     {


     if(a[i]>b[i])
     {

         a1++;
     }
     if(b[i]>a[i])
     {

         b1++;
     }
     }


     printf("%d %d",a1,b1);
       return 0;

     }



