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


   int x1,x2,v1,v2;



   cin>>x1>>v1>>x2>>v2;

   if(x1>x2)
   {

       swap(x1,x2);
       swap(v1,v2);


   }

       for(int i=0;  ; i++)
       {

        if(x1==x2)
        {

            cout<<"YES";
            return 0;
        }

        else if ( x1>x2)
        {


            cout<<"NO";
             return 0;

        }

       else
       {


           x1+=v1;
           x2+=v2;
       }


       }






 return 0;



}




