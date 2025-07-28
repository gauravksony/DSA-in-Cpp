#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
for(int i=0; i<n-1; i++){
    int didSwap = 0;  //using to make best case O(n).
    for(int j=0; j<n-i-1; j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            didSwap = 1;
        } //swappin will be in every step.
    } 
    if(didSwap==1){
        cout<<"swapped\n";
        
    }
    if(didSwap==0){
        cout<<"sorted\n";
        break;
    }  //after sorting is completed it will stop
    cout<<"runs\n";
    
}
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
 return 0;
}