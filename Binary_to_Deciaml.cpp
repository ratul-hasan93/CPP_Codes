// Binary to Decimal Problem
#include<bits/sdtc++.h>
using namespace std;
int main(){
int n,sum=0, dc=1;
  cin>>n;
  for(int i=n; i!=0; i/=10){
  sum+=(i%10)*dc;
    dc*=2;
  }
  cout<<sum<<endl;
  return 0;
}
