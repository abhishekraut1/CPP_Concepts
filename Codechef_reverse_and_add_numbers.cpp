#include<iostream>
#include<string>
using namespace std;
int reverseStringAndMakeInt(string s){
    for(int i=0;i<s.length()/2;i++){
        swap(s[i],s[s.length()-1]);
    }
    int ans=stoi(s);
    return ans;
}
string reverseString(string s){
    for(int i=0;i<s.length()/2;i++){
        swap(s[i],s[s.length()-1]);
    }

    // int reversedNo = 0;
    // int remainder;
    // while(n!=0){
    //     remainder = n%10;
    //     reversedNo = reversedNo*10 + remainder;
    //     n = n/10;
    return s;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        string a;
        string b;
        cin>>a>>b;
        long long int sum = (reverseStringAndMakeInt(a) + reverseStringAndMakeInt(b));
        string s = to_string(sum);
        cout<<reverseString(s)<<endl;
    }
return 0;
}