// power program
#include<bits/stdc++.h>
using namespace std;
int main(){
int base,power,result=1;
cout<<"Enter Your Input:";
cin>>base>>power;
for(int i=1; i<=power; i++)
    result*=base;
cout<<result<<endl;
return 0;
}
