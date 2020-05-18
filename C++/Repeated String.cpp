#include <bits/stdc++.h>
#define o long long int
using namespace std;


int main()
{
string s;


     cin>>s;

     o n=s.size();

     o d,i;


     cin>>d;
           o p=0;
     for(i=0;i<n;i++)
     {

      if(s[i]=='a')
      {

          p++;
      }
     }
  o document = 0;
      document=(d/n)*p;

   o k=(d%n);
    p=0;

    for(i=0;i<k;i++)
    {

        if(s[i]=='a')
     p++ ;

    }

    document+=p;


   cout<<document;

   return 0;

}

