#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Your Number: ";
    cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j%2;
        }
        cout<<endl;
    }
return 0;
}