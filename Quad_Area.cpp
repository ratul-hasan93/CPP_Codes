// area of Quad problem
#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,d,area,s;
cout<<"Enter your input:";
cin>>a>>b>>c>>d;
if(a+b+c>d&&a+b+d>c&&a+c+d>b&&b+c+d>a){
    s=(a+b+c+d)/2;
    area=sqrt((s-a)*(s-b)*(s-c)*(s-d));
    cout<<"Quad is:"<<area;
    }
    else{
        cout<<"Quad is not valid";}
    return 0;
}
