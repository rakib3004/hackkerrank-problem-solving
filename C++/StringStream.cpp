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

     string a,b;

     cin>>a;

       int i;

       int p;

       p=a.size();

       for(i=0;i<p;i++)
       {
           if(a[i]!=',')
           {

             cout<<a[i];
           }
            else{cout<<endl;}


       }



    return 0;
}




