#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<cmath>
#include<string>
#define   o  unsigned long long int
using namespace std;

int main()

{



  int  n,k,m=0;



    cin  >>n;



    int a[n];
    int y[6]={0};
    int i,j;


    for(i=0;i<n;i++)
    {

      cin>>a[i];

      y[a[i]]++;

    }
      int max=y[5],p=5;

      for(i=4;i>=1;i--)

      {

          if(y[i]>=max)
          {

              max=y[i];
              p=i;
          }
      }

      cout  <<p;

    return 0;

}


