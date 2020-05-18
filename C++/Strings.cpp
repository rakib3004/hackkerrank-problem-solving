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

     cin>>a>>b;


     int  p,q;

     p=a.size();

     q=b.size();

     cout<<p<<" "<<q<<endl;

     cout<<a+b<<endl;

     swap(a[0],b[0]);

     cout<<a<<" "<<b;



    return 0;
}




