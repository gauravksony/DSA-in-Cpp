#include<bits/stdc++.h>
#include<vector>
using namespace std;
void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    //[low....mid]
    //mid+1 ..... high
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
           temp.push_back(arr[right]);
            right++; 
        }
    }
    // if still element on the left or right -->
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    //copy the elements of the temp[] to arr[] from low to high index
    for(int i=low; i<=high; i++){
        arr[i] = temp[i-low];
    }
    
}

void mS(vector<int> &arr, int low, int high){
    if(low==high) return;
    int mid = (low+high)/2;
    mS(arr,low,mid);
    mS(arr, mid+1, high);
    merge(arr,low,mid,high);
}

void mergeSort(vector<int> &arr, int n){
    mS(arr,0,n-1);
}
int main(){
int n;
cin>>n;
vector<int> v(n);
for(int i=0; i<n; i++){
    cin>>v[i];
}
mergeSort(v,n);
for(int i=0; i<n; i++){
    cout<<v[i]<<" ";
}
return 0;
}