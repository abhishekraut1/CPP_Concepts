#include<iostream>
#include<vector> // OR #include<bits/stdc++.h>
using namespace std;
void printVec(vector<pair<int,int>> &v){//always pass reference
cout<<"size: "<<v.size()<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i].first<<" "<<v[i].second<<endl;
}
}
int main() {
  vector<pair<int,int>> v;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
      int x,y;
      cin>>x>>y;
      v.push_back({x,y}); //OR v.push_back(make_pair(x,y));
  }
  printVec(v);
  swap(v[0],v[1]); //it will swap pairs
  printVec(v);
return 0;
}