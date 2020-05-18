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



        int  n,p;


        cin  >>n>>p;



        int a,b;

        if(n%2==0)
        {
            n++;
        }
        if(p%2==0)

        {p++;

        }

        a=(p/2);

        b=(n-p)/2;

        cout  << std::min(a,b);
           return 0;
}

