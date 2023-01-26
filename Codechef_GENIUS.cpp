#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;

        ll corrrect,incorrect,unattempted;
        if(x%3 == 0){
            corrrect = x/3;
            incorrect = 0;
        }else if((x+1)%3 == 0){
            corrrect = (x+1)/3;
            incorrect = 1;
        }else if((x+2)%3 == 0){
            corrrect = (x+2)/3;
            incorrect = 2;
        }
        unattempted = n - corrrect - incorrect;
        if (corrrect + incorrect > n){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<corrrect<<" "<<incorrect<<" "<<unattempted<<endl;
        }
    }
return 0;
}