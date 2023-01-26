#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;


    while(t--){
        int n;
        int x,y;
        cin>>x>>y;
        if(x==y){
            n = 2*y-1;
        }else {
            n = x+y; 
        }
        cout<<n<<endl;
    }
return 0;
}