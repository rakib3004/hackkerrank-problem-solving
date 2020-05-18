
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define o long long int

int main()

{



char  a[11];

scanf("%s",&a);

int b,i,c,d,e,f,G;

b=a[0]-'0';
b=b*10;

c=a[1]-'0';
  d=(b+c)+12;


     e=d/10;
     f=d%10;

if(a[8]=='P'&&d!=24)
{
   a[0]=e+'0';
   a[1]=f+'0';
}

  else if(d==24&&a[8]=='A')

  {
      a[0]='0';
      a[1]='0';
  }
for(i=0;i<8;i++)
{

    printf("%c",a[i]);
}




       return 0;

     }



