#include<bits/stdc++.h>
using namespace std;
using ll=long long int;using fl=float;using dl=double long;
#define F first
#define S second
#define pb push_back
#define eif else if
#define nl endl
#define tc ll t; cin >> t; while(t--)
const int N = 101;
int solve(int n){
    int a[N];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum += a[i];
    }
    int ans=0;
    for(int i=1;i<=5;i++){
        if((sum+i) % (n+1) !=1){
            ans++;
        }
    }
    return ans;
}
int main() {
    ll n; cin>>n;
    cout<<solve(n);
return 0;
}