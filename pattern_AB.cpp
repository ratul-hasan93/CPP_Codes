/*AA
  BBAA
  AABBAA
  BBAABBAA*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter Your n input:";
cin>>n;
for(int i=1; i<=n; i++){
    for(int j=i; j>=1; j--){
    if(j%2)cout<<"AA";
    else
        cout<<"BB";
}
cout<<endl;
}
return 0;
}
