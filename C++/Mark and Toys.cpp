
#include <bits/stdc++.h>

using namespace std;

#include<algorithm>

// Complete the maximumToys function below.


int main()
{
   int n,maz;

   cin>>n>>maz;

int a[n];

   int i;


   for(i=0;i<n;i++)
   {
       cin>>a[i];

   }


   sort(a,a+n);

int y=0;


for(i=0;i<n;i++)
{
y=y+a[i];

if(y>maz)
{
    cout<<i;
    return  0;
}

}


cout<<n;


    return 0;
}
