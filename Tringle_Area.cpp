// area of tringle problem
#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,area,s;
cout<<"Enter your three input:";
cin>>a>>b>>c;
if(a+b>c&&b+c>a&&a+c>b){
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area is:"<<area;
    }
    else{
        cout<<"tringle is not valid";}
    return 0;
}
