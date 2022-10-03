// Input three number and check which is Big?
#include<iostream>
using namespace std;
int main(){
//using Conditional Operator
double a,b,c,max;
cout<<"Enter your Input:";
cin>>a>>b>>c;
max=(a>b&&a>c?a:b>c?b:c);
cout<<"max is: "<<max;
return 0;
}
/*int main(){
 //using if else
 int a,b,c;
 cout<<"Enter three inputs:";
 cin>>a>>b>>c;
 cout<<"max is:";
 if(a>b&&b>c)cout<<a;
 else if(b>c)cout<<b;
 else cout<<c;
 return 0;
}*/

