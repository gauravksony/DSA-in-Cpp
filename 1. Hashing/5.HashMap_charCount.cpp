#include<bits/stdc++.h>
using namespace std;
int main(){
 string s;
 cin>>s;

 //precompute
 unordered_map<char, int> mpp; //best and average case for UM is O(1), so always use UM. and if it shows TLE(time limit exceeded) then only use map. map's O(log(N)) for all the cases.
 
 for(int i=0; i<s.size(); i++){
    mpp[s[i]]++;
 }

 //for showing how values store in map
 for(auto it:mpp){
    cout<<it.first<<"-->"<<it.second<<endl;
 }
 
//query
int q;
cin>>q;
while(q--){
    char c;
    cin>>c;
    //fetch
    cout<<"no. of "<<c<<" in string is: "<<mpp[c]<<endl;
}
 return 0;
}