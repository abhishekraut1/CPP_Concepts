#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool ans[n+1] = {false};
    for(int i=0;i<n;i++){
        if(ans[arr[i]] == false)
            ans[arr[i]] = true;
    }

    for(int i=0;i<=n;i++){
        if(ans[i] == false)
            cout<<i<<" ";
    }
return 0;
}