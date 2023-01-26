#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp = arr[i];
        // Here 'j' value is for both loops hence when 'j' changes it 
        // updates in 2nd loop it also updates in 1st loop
        int j=i-1;
        for(; j>=0;j--){
            if(arr[j]>temp)
                // shifting
                arr[j+1] = arr[j];
            else
                break;
        }
        arr[j+1] = temp; 
    }
}

int main() {
    int arr[] = {4,82,23,50,33,0,-9};
    int n = 7;

    insertionSort(arr,n);
    printArray(arr,n);
return 0;
}
// Time complexity:
// worst case complexity : O(n^2)
// best case complexity : O(n)
// average case complexity : O(n^2)

// Insertion sort is In-place sort algorithm.
// Hence, Space complexity: O(1)

// Insertion Sort is Unstable Algorithm.