#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<cmath>
#include<string>
#define   o  unsigned long longint
using namespace std;

int main()

{

   int  n,k,sum=0,d;

    cin  >>n>>k;

    int a[n];


    int i;


     for(i=0;i<n;i++)
     {

        cin  >>a[i];

        sum+=a[i];

     }


      sum-=a[k];

      sum/=2;

      cin  >>d;


      if(d-sum)
      {

          cout<<d-sum;
      }

      else
      {

          cout<<"Bon Appetit";

      }








           return 0;
}


