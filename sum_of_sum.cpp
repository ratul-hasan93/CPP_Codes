// 1+(1+2)+(1+2+3)+.....+(1+2+3+n)
#include<bits/stdc++.h>
using namespace std;
int main(){
int n, sum=0;
  cin>>n;
  for(int i=1; i<=n; i++){
   sum+=(i*(i+1))/2;
  }
  cout<<"sum is: "<<sum;
  return 0;
}
