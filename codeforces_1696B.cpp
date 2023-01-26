#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
int solve(int n){
    int a[N];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ct=0;
    int j=0,k=0;
    for(;j<n;j++){
        if(a[j]==0) continue;
        else{
            ct++;
            for(k=j;k<n;k++){
                if(a[k]==0){
                    break;
                }
            }
            j=k;
        }
    }
    if(ct>2) return 2;
    else return ct;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
return 0;
}