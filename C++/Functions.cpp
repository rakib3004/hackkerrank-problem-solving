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

    int a[4];

    int i;

    for(i=0;i<4;i++)
    {

        cin>>a[i];

    }

    sort(a,a+4);

    cout<<a[3];


    return 0;
}





