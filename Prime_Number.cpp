//write a program to check prime number
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter your input:";
cin>>n;
bool x=1;
for(int i=2; i<=n/2; i++){
    if(n%i==0)
        x=0;break;
}
if(x==1)cout<<"prime Number";
else cout<<"Not prime Number";
return 0;
}
