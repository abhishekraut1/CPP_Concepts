#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        //for n-1 rounds
        bool flag = false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }
        if(flag==false){
            break;
        }
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int m,n,k;
        cin>>m>>n>>k;
        int cars[m];
        int sum=0;
        for(int i=0;i<m;i++){
            cin>>cars[i];
        }
        bubbleSort(cars,m);
        for(int i=0;i<k;i++){
            cars[i] = n-cars[i];
        }
        for(int i=0;i<m;i++){
            sum += cars[i];
        }
        cout<<sum<<endl;
    }
return 0;
}