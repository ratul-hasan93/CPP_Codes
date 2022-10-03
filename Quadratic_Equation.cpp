// wite a program to calculate roots of a quadratic equation
#include<bits/stdc++.h>
using namespace std;
int main(){
double a,b,c,d,r1,r2;
cout<<"Enter the value of (a,b,c):";
cin>>a>>b>>c;
d=b*b-4*a*c;
if(d<0)
    cout<<"Complex roots!!";
else{
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    cout<<"First root is:"<<r1<<endl;
    cout<<"Second root is:"<<r2;
}
return 0;
}
