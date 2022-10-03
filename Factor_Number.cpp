// Find the factor of number and sum of all factors
#include<iostream>
using namespace std;
int main(){
int n, sum=0;
cout<<"Enter your input:";
cin>>n;
cout<<"Factors of n is: ";
for(int i=1; i<=n; i++){
    if(n%i==0)cout<<i<<" ",
        sum+=i;
}
cout<<sum;
return 0;
}
