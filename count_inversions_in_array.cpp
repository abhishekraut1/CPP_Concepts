#include<iostream>
using namespace std;

int merge(int *arr, int s, int e) {

    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    //merge 2 sorted arrays     
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    int invCount = 0;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] <= second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
            invCount += len1-index1;  //*******
        }
    }   

    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[mainArrayIndex++] = second[index2++];
    }
    delete []first;
    delete []second;

return invCount;
}

int mergeSort(int *arr, int s, int e) {

    //base case
    if(s >= e) {
        return 0;
    }
    int invCount = 0;
    int mid = (s+e)/2;

    //left part sort karna h 
    invCount += mergeSort(arr, s, mid);
 
    //right part sort karna h 
    invCount += mergeSort(arr, mid+1, e);

    //merge
    invCount += merge(arr, s, e);

return invCount;
}

int main() {

    int arr[] = { 1,20,6,7,5,8,11,3 };
    int n = sizeof(arr)/sizeof(arr[0]);

    int ans = mergeSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;

    cout<<ans;
    return 0;
}