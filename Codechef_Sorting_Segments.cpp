#include<iostream>
using namespace std;
bool bubbleSort(int arr[],int n1,int n2){
    bool flag = false;
    for(int i=n1;i<n2-1;i++){
        //for n-1 rounds
        // bool flag = false;
        for(int j=n1;j<n2-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }
        if(flag==false){
            break;
        }
    }
    return flag;
}

void solve(int a[],int n,int k){
    
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int sum=0;
        while(bubbleSort(a,0,n)){
            sum++;
            int ct[2]; int c=0;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                ct[c]=i+1;
                c++;
                if(c==2){
                    bubbleSort(a,ct[0],ct[1]);
                }
            }
        }
        }
            cout<<sum<<endl;
    }
return 0;
}