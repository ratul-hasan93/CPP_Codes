//Cheak Armstrong or not
#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum=0,n,c=0;
    cin>>n;
    for(int i=n; i!=0; i/=10){c++;}
    for(int i=n; i!=0; i/=10){
        int b=(i%10), p=c, res=1;
        for(int j=1; j<=p; j++){
            res*=b;
        }
        sum+=res;    
    }
    if(sum==n)cout<<"Armstrong Number";
    else cout<<"Not Armstrong Number";
    return 0;
}
