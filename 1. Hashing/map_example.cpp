#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<int, int> hash;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        hash[num]++;
        cout << "Inserted: " << num << ", Current Count: " << hash[num] << endl;
    }
    return 0;
}
