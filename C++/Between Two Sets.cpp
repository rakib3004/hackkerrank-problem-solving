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

                int r=0;


    int n,m;

        int y=0,c=0;
    cin>>n>>m;


    int a[n],b[m] ;


    int i,j;



    for(i=0;i<n;i++)
    {

        cin>>a[i];
    }

    for(i=0;i<m;i++)
    {

        cin>>b[i];
    }


    sort(a,a+n);
    sort(b,b+m);


    for(i=a[0];i<=b[m-1];i++)
    {


      for(j=0;j<n;j++)
      {

          if(i%a[j]==0)
          {
             y=1;

          }
          else
          {

              y=0;
              break;
          }
      }



        for(j=0;j<m;j++)
      {

          if(b[j]%i==0)
          {
             c=1;

          }
          else
          {

              c=0;
              break;
          }



      }


      r+=(c&y);

    }



     cout<<r;

 return 0;



}




