#include <iostream>
#include<algorithm>
#include <cstdio>
using namespace std;


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
 int p[4];
 p[0]=a;
 p[1]=b;
 p[2]=c;
 p[3]=d;

 sort(p,p+4);

cout<<p[3];
    return 0;
}

