#include<iostream>
#include<vector>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i=0,j=0;
    vector<int> ans;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }else if(arr2[j]>arr1[i]){
            i++;
        }else{
            j++;
        }
    }
    return ans;
}
int main(){

return 0;
}


