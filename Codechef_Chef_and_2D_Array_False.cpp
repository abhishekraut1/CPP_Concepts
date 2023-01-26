#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    long long a[n][n];
    for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
            cin>>a[i][j];
        }
    }
    long long sum = a[0][0];
    
    int i=0,j=0;

    while(i< (n-1) || j< (n-1)){

        if(i==(n-1)){
            ++j;
        }
        else if(j==(n-1)){
            ++i;
        }else if(a[i+1][j]>a[i][j+1]){
            ++j;
        }else if(a[i+1][j]<a[i][j+1]){
            ++i;
        }
        sum = (sum + a[i][j]);
        cout<<a[i][j]<<endl;
    }
      cout<<sum<<endl;
return 0;
}