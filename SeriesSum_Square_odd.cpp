// summation of this series: 1*1-3*3+5*5-7*7...+n*n
#include<bits/stdc++.h>
using namespace std;
int main(){
int n, sum=0;
cout<<"Enter your Input: ";
cin>>n;
for(int i=1; i<=n; i++){
    if(i%2==1)
        sum+=(i*2-1)*(i*2-1);
    else
        sum-=(i*2-1)*(i*2-1);
}
cout<<"sum is: "<<sum;
return 0;
}
