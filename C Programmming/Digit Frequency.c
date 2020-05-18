#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


 char a[1000];


   scanf("%s",&a);

   int d,n=strlen(a);

   int i;
   int l[10]={0};

   for(i=0;i<n;i++)
   {

     if(a[i]>='0'&&a[i]<='9')
     {

       d=a[i]-'0';
       l[d]++;
     }

   }

   for(i=0;i<10;i++)
   {


       printf("%d ",l[i]);
   }

       return 0;



}

