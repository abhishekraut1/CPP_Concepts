#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
long long int arr[N];
int main() {
    int n;//boxes
    cin>>n;

    int m;//days
    cin>>m;

    for(int i=1;i<=m;i++){
        int l,r;
        cin>>l>>r;

        arr[l] += 1;;
        arr[r+1] -= 1;
    }
    //prefix sum
    for(int i=1;i<=n;i++){
        arr[i] += arr[i-1];
    }

    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        int cnt = 0;
        for(int i=1;i<=n;i++){
            if(arr[i] >= x) cnt++;
    }
        cout<<cnt<<endl;
    }
return 0;
}