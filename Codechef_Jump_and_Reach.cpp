#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin>>t;

    long long ans[61];
        ans[0]=1;
        ans[1]=1;
        ans[2]=2;

        for(int i=3;i<=60;i++){
            ans[i]=ans[i-1]+ans[i-2]+ans[i-3];
        }

    while(t--){

        int n; cin>>n; 

        cout<<ans[n]<<endl;
    }
    return 0;
}