#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> v;
    int evenSum = 0;
    int oddSum = 0;
    int totalSum = 0;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);

        if(i%2==0)
            evenSum += v[i];
        else
            oddSum += v[i];
        
        totalSum += v[i];
    }
    
    if(evenSum > oddSum)
        cout<< totalSum - (evenSum - oddSum);
    else
        cout<< totalSum - (oddSum - evenSum);

return 0;
}