#include<iostream>
#include<list>
using namespace std;
int main() {
    int t;
    cin>>t;

    while(t--){
        float a,b,c;
        float p,q,r;
        cin>>a>>b>>c;
        cin>>p>>q>>r;

        float half = (p+q+r)/2;

        if((a+b+r) > half){
            cout<<"YES"<<endl;
        }else if((a+c+q) > half){
            cout<<"YES"<<endl;
        }else if((b+c+p) > half){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
return 0;
}