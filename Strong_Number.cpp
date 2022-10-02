// Strong Number problem solution
#include<bits/sdtc++.h>
using namespace std;
int main(){
  int n, sum=0;
  cin>>n;
  for(int i=n; i!=0; i/=10){
   int num=(i%10), fact=1;
    for(int j=1; j<=num; j++){
     fact*=j;
    }
    sum+=fact;
  }
  if(sum==n)cout<<"strong number";
  else cout<<"Not a strong number";
  return 0;
}
