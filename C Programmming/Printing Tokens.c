
#include<stdio.h>
 #include<stdlib.h>
 #include<string.h>

int main()

{


    char  a[1002];


     fgets(a,1002,stdin);



     int i;

     int p=strlen(a);

     for(i=0;i<p;i++)
     {


         if(a[i]==32)
         {

             a[i]='\n';

         }
         else
         {


             continue;
         }
     }


     printf("%s",a);
       return 0;

     }



