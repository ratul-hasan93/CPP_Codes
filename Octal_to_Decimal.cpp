// Octal to Decimal Problem
#include<bits/sdtc++.h>
using namespace std;
int main(){
int n,sum=0, oc=1;
  cin>>n;
  for(int i=n; i!=0; i/=10){
  sum+=(i%10)*oc;
    oc*=8;
  }
  cout<<sum<<endl;
  return 0;
}
