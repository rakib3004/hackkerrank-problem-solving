#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<cmath>
#include<stdlib.h>
#include<math.h>
#define  o unsigned long long int
using namespace std;

int main()

{




int s,t;

int a,b;
int m,n;
 int apple=0,orange=0;
cin>>s>>t;
cin>>a>>b;
cin>>m>>n;

int x[m],y[n];


int i;


for(i=0;i<m;i++)
{



    cin>>x[i];
    x[i]=x[i]+a;
    if(x[i]>=s&&x[i]<=t)
    {

        apple++;
    }
}

for(i=0;i<n;i++)
{



    cin>>y[i];
     y[i]=y[i]+b;

     if(y[i]>=s&&y[i]<=t)
     {

         orange++;
     }

    }

  cout<<apple<<endl<<orange;


    return 0;
}




