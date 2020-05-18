#include<stdio.h>

int main()

{

    int n;
    scanf("%d",&n);
int a[n];
    int i;
    int count=0;
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }


int j;

for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
      if (a[i] != 1129 && (a[i] == a[j])) {
        count++;
        a[i] = 1129;
        a[j] = 1129;
      }
    }
}

printf("%d", count);

return 0;
}

