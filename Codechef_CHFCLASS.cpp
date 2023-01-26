#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int  t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n<6){
            cout<<"0"<<endl;
        }else if(n==6){
            cout<<"1"<<endl;
        }else if(n>6){
            cout<<(1+(n-6)/7)<<endl;
        }
    }
return 0;
}