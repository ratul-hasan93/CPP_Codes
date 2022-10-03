// Sammation of this series: 1*1+2*2+3*3+.....+n*n
#include<iostream>
using namespace std;
int main(){
int n, sum=0;
cout<<"Enter your Input:";
cin>>n;
for(int i=1; i<=n; i++)
    sum+=i*i;
    cout<<"sum is: "<<sum;
return 0;
}


