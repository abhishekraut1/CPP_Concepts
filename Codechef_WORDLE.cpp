#include<bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin>>test;
    while(test--){
        string s,t;
        cin>>s>>t;
        string ans;
        for(int i=0;i<5;i++){
            if(s[i] == t[i])
                ans += 'G';
            else
                ans += 'B';
        }
        cout<<ans<<endl;
    }
return 0;
}