// Sumattion of this series 1+2+3+4+5+6+....+n
#include<bits/stdc++.h>
using namespace std;
int main(){
int n, sum=0;
cout<<"Enter your Input";
cin>>n;
for(int i=1; i<=n; i++)
    sum+=i;
cout<<"sum is:"<<sum;
return 0;
}
