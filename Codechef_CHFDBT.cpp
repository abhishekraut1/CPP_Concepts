#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n = (n&1) ? n/2 + 1 : n/2 ;
        cout<<n<<endl;
        }
return 0;
}