//first 10 , 2nd 10 and 3rd 10 show using switch
#include<iostream>
using namespace std;
int main(){
int x;
cout<<"Enter your input: ";
cin>>x;
x/=10;
switch(x){
case 0:
    cout<<"1st 10";
    break;
case 1:
    cout<<"2nd 10";
    break;
case 2:
    cout<<"3rd 10";
    break;
default:
    cout<<"Out of the range";
    break;
}
}
