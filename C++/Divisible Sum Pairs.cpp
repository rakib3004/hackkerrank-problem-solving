#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);


int main()
{
 int  n,k,m=0;



    cin  >>n>>k;



    int a[n];

    int i,j;


    for(i=0;i<n;i++)
    {

      cin>>a[i];

    }

    for(i=0;i<n;i++)
    {


     for(j=i+1;j<n;j++)
     {

          if((a[i]+a[j])%k==0)
          {


           m++;


          }

     }

    }

     cout  <<m;

    return 0;

}


