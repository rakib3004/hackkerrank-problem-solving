#include<stdio.h>
#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#define o  unsigned  long long int
using namespace std;
int checkPrimeNumber(o n);

int main()
            {





    int a,b;


    cin>>b>>a;

    int y=(2*a)/b;

    int  z=(y/2)*b;
    if(z==a)
    {

        cout<<y;
    }
    else
    {

        cout<<y+1;
    }





    return 0;

}



