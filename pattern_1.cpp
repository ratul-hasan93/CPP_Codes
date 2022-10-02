// pattern
// 1
// 12
// 123
// 1234
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Your Pattern:";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=i; j>=1; j--){
          cout<<' '<<j; 
        }
        cout<<endl;
    }
      return 0;
}

