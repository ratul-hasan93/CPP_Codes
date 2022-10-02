//GCD_and_LCM
#include<<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
  cin>>x>>y;
  int min=x<y?x:y;
  for(int i=min; i>=1; i--){
   if(x%i==0 && y%i==0){
   GCD=i;
     LCM=(x*y)/i;
     break;
   }
    cout<<"GCD: "<<GCD<<endl;
    cout<<"LCM: "<<LCM;
    return 0;
  }
}
