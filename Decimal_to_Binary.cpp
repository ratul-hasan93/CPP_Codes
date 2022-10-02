// Decimal to Binary Problem
#include<bits/sdtc++.h>
using namespace std;
int main(){
int n,sum=0, bc=1;
  cin>>n;
  for(int i=n; i!=0; i/=2){
  sum+=(i%2)*bc;
    bc*=10;
  }
  cout<<sum<<endl;
  return 0;
}
