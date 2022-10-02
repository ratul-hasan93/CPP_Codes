//Reverse Number
#include<bits/stdc++.h>
using namespace std;
int main(){
int n, sum=0;
cout<<"Enter your input: ";
cin>>n;
for(int i=n; i!=0; i/=10){
    sum=(sum*10)+(i%10);
}
cout<<sum;
    return 0;
}
