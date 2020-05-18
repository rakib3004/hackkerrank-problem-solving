
#include <bits/stdc++.h>

using namespace std;

int main()
{
     int n;

         int y=0;

      cin>>n;



      int a[n+1];

        a[n]=1;

      int i;


      for(i=0;i<n;i++)
      {
             cin>>a[i];

      }



        for(i=0;i<n; )
        {

        if(a[i+2]==0)

        {
         y++;
         i++;
         i++;
        }
      else

        {
         y++;
         i++;

        }

        }

        cout<<y-1;



    return 0;
}
