#include<bits/stdc++.h>
using namespace std;

int powerOf2(int n){
    // base case
    if(n==0)
        return 1;
    // recursive relation
return 2 * powerOf2(n-1);
}

void printVec(vector<string> &s){
    int _xor = 1;
    for(int i=0;i<s.size();i++){
        int sum = 0;
        for(int j=0;j<s[i].size();j++){
            sum += powerOf2(s[i].size()-j-1) * (int) s[i][j];
    }
    _xor = _xor ^ sum;
    }
    cout<<_xor<<endl;
}

void solve(vector<string>& ans, string str, string output, int i) {
    //base case
    if(i>=str.length()) {
        ans.push_back(output);
        return ;
    }
    
    //exclude
    solve(ans, str, output, i+1);
    //include
    output.push_back(str[i]);
    solve(ans, str, output, i+1);
}

vector<string> subsequences(string str){
	
	vector<string> ans;
    string output = "";
    solve(ans,str,output,0);
    return ans;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<string> ans;
        ans = subsequences(s);
        printVec(ans);
    }
return 0;
}