#include <iostream>
using namespace std;
int main() {
   	long long n,i,j;
   	cin>>n;
   	long long a[n][n];
   	for(i=0;i<n;i++){
   	    for(j=0;j<n;j++){
   	        cin>>a[i][j];
           }
    }
   	for(i=1;i<n;i++){
           a[0][i]+=a[0][i-1];
		   a[i][0]+=a[i-1][0];
	   }

	for(i=1;i<n;i++){
	    for(j=1;j<n;j++){
	   a[i][j]+=min(a[i-1][j],a[i][j-1]);
        }
    }
   	cout<<a[n-1][n-1];
   	return 0;
}