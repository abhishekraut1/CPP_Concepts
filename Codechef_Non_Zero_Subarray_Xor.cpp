#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t; 
    set<int> s;
    while(t--){
        int n;
        cin>>n;
        int i=2;
        int ans=1;
        while(s.size()<n){
            ans = ans^i;
            if(ans!=0){
                s.insert(ans);
            }
            i++;
        }
        for(auto value : s){
            cout<<value<<" ";
        }
        cout<<endl;
    }
return 0;
}