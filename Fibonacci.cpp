#include<iostream>
using namespace std;
int main(){
int a=0, b=1, n;
cin>>n:
cout<<"Fibo"<<a<<" "<<b;
for(int i=3; i<=n; i++){
   cout<<" "<<a+b;
   int t=b;
   b=a+b;
   a=t;
 }
}
