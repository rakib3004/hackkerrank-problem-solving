#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<stdlib.h>
#include<cmath>
#include<cstdio>
#include<map>
#include<string>
#include<string.h>
#define   o   long long int
#define x  int i,n,k;cin >>n>>k;  int a[n];for(i=0;i<n;i++){cin>>a[i];}


using namespace std;

int main()

{

int n;


cin>>n;


int i;

     int p1[n],p2[n],q1[n],q2[n],r1[n],r2[n];

for(i=0;i<n;i++)
{


    cin>>p1[i]>>p2[i]>>q1[i]>>q2[i];

    r1[i]=2*q1[i]-p1[i];
    r2[i]=2*q2[i]-p2[i];



}



for(i=0;i<n;i++)
{



    cout<<r1[i]<<" "<<r2[i]<<endl;
}


              return 0;

}

