#include<bits/stdc++.h>
int fact(int n){
    // base case
    if(n==0)
        return 1;
    // int smallerProblem = fact(n-1);
    // int biggerProblem = n * smallProblem;
    // return bigProblem;
return n * fact(n-1);
}
using namespace std;
int main() {
    int n;
    cin>>n;
    cout<<fact(n);
return 0;
}
// Time complexity = O(n)