// counting frequency of char in the string using hash_array.

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    //precompute
    int hash[26] = {0};
    for( int i=0; i<s.size(); i++){
        hash[s[i] - 'a']++;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<"no. of "<<c<<" in the string is: "<< hash[c-'a']<<endl;
    }
    return 0;
}
