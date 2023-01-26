#include<iostream>
using namespace std;
// aage se pichhe sort karte jare
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        printArray(arr,n);
        // for n-1 rounds
        int minIndex = i; //firstly assuming index 'i' as minimum index
        for(int j=i+1;j<n;j++){
            // process from (i+1)th to (n-1)th index
            if(arr[minIndex] > arr[j]){
                minIndex = j; 
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}

int main() {
    int arr[] = {4,82,23,50,33,0,-9};
    int n = 7;
    int a[]={1,2,3,78,70}; //imp example
    selectionSort(arr,n);
    printArray(arr,n);

    selectionSort(a,5);
    printArray(a,5);
return 0;
}
//What to do: 
// Compairing ith element with all elments and 
//find min element than ith index element and swap it at end of each round
// We can't optimise it using 'bool flag' because if minimum elment
// is not find it does not means that array is sorted.

// Time complexity:
// worst case complexity : O(n^2)
// best case complexity : O(n^2)
// average case complexity : O(n^2)

// Selection sort is In-place sort algorithm.
// Hence, Space complexity: O(1)

// Selection Sort is not stable Algorithm.

// Use:
// *) When small size array/vector/list is given.

/* In-place and Out-place Algoruthm:
 An in-place sorting algorithm sorts the elements in place: that is, it needs only O(1) extra space.
 An out-of-place sorting algorithm needs extra space to put the elements in as it's sorting them.
 Usually this means O(n) extra space. 
 */