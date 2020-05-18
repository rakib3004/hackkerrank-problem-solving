
#include<stdio.h>
#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#define o long long int
using namespace std;

int main()

{



    o n;


    cin>>n;



    o a[n]={0};


    o i;


    for(i=0;i<n;i++)
    {

        cin>>a[i];

        a[i]--;


    }


    for(i=0;i<n;i++)
    {



        cout<<((a[i]*(a[i]+1))/2)<<endl;
    }






    return 0;

}
