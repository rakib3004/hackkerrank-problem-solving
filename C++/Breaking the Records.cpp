

#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<cstdio>
#include<cmath>
#include<stdlib.h>
#include<math.h>
#define  o unsigned long long int
using namespace std;

int main()

{

   int n;

       int p=0,q=0;
   cin>>n;



   int a[n];


   int i;

   cin>>a[0];

     int min=a[0],max=a[0];




   for(i=1;i<n;i++)
   {

     cin>>a[i];

     if(a[i]<min)
     {
      min=a[i];
      p++;

     }
      if(a[i]>max)
     {
      max=a[i];
      q++;

     }





   }






   cout<<q<<" "<<p;

 return 0;



}



