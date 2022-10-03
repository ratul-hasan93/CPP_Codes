// sumation of this series 1+1/2+1/3+1/4+....+1/n
#include<bits/stdc++.h>
using namespace std;
int main(){
double n, sum=0;
cout<<"Enter your input:";
cin>>n;
for(int i=1; i<=n; i++)
    sum+=1.0/i;
    cout<<"Sum is:"<<sum;
return 0;

}
