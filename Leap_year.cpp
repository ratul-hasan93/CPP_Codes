// check leap year or not
#include<bits/stdc++.h>
using namespace std;
int main(){
int y;
cout<<"Enter your year:";
cin>>y;
if((y%4==0&&y%100!=0)||y%400==0)
    cout<<"leap year";
else
    cout<<"Not leap year";
return 0;
}
