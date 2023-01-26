#include<bits/stdc++.h>
using namespace std;
int main() {
    int keys[5] = {98, 57, 31, 45, 46};
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a[5] = {0};
        for(int i=0;i<s.length();i++){
            a[i] = s[i] - 'A' + keys[i];
            int b = a[i]%26;
            char c = 'A'+b;
            cout<<c;
        }
        cout<<endl;
    }
return 0;
}