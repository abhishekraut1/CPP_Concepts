#include<bits/stdc++.h>
using namespace std;

int main() {
   int t;
    cin>>t;
    while(t--)
    {
       int n;
        cin>>n;
    vector<int>a(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        int value=0;
        if(i>0)
        {
            value=max(value,a[i]&a[i-1]);
        }
        if(i<n-1)
        {
            value=max(value,a[i]&a[i+1]);
        }
        cout<<value<<" ";
    }
    cout<<endl;
        
    }
	return 0;
}
