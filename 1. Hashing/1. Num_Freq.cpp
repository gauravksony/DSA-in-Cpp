#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int hash[n];
for(int i=0; i<n; i++ ){
cin>>hash[i];
}

int q;
cin>>q;
while(q--){
int num;
cin>>num;
int count = 0;
for(int i=0; i<n; i++){
    if(hash[i]==num){
        count = count + 1;
    }
}
cout<<count<<endl;
}
 return 0;
}