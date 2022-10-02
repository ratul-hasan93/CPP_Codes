// Factorial Number
#include<bits/sdtc++.h>
using namespace std;
int main(){
  int n, Fact=1;
  cin>>n;
  for(int i=1; i<=n; i++){
   Fact*=i;
  }
  cout<<"Factorial is: "<<Fact<<endl;
  return 0;
}
