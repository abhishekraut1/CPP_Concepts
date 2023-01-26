#include<iostream>
using namespace std;
// pichhese aage sort karte jare
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        //for n-1 rounds
        bool swapped = false;
        for(int j=0;j<n-1-i;j++){
            
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped==false){
            break;
        }
    }
}

int main() {
    int arr[] = {4,82,23,50,33,0,-9};
    int n = 7;
    int a[]={1,2,3,78,70};
    int b[]={8, 22, 7, 9, 31, 5, 13};

    bubbleSort(arr,n);
    printArray(arr,n);

    bubbleSort(a,5);
    printArray(a,5);

return 0;
}
//What to do:
// In every round the largest element between i to n-1 ---will be sorted at (n-i)th position
// works by repeatedly swapping the adjacent elements if they are in wrong order.

// Time complexity:
// worst case complexity : O(n^2)
// best case complexity : O(n)
// average case complexity : O(n^2)

// Bubble sort is In-place sort algorithm.
// Hence, Space complexity: O(1)

// Bubble Sort is Stable Algorithm.
