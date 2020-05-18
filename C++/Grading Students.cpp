#include<bits/stdc++.h>
using namespace std;

int main(){
int i;
int n;
cin>>n;

int a[n];

for(i=0;i<n;i++){

    cin>>a[i];
    int d=(a[i]/5);
    d++;
    if(a[i]>37){

        if(a[i]%5>2){
            a[i] = d*5;
        }
    }

}
for(i=0;i<n;i++){

    cout<<a[i]<<endl;
}

return 0;
}


