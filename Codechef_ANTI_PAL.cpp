#include<iostream>
#include<set>
using namespace std;
int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        set<char> set;

        for(int i=0;i<n;i++){

        set.insert(s[i]);

        }

        bool f = false;
        for(int i=0;i<=n;i++){

        if(s[i+1] == s[n+1-i+1]){
            cout<<"NO"<<endl;
            f = true;
            break;
        }

        if(f = false && i==n-1){
            for(auto i:set){
            cout<<i<<" ";
        }

        }
        
        }

    }
return 0;
}
