#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0; j<n; j++){
           cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0; j<=i; j++){
           cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i; j++){
           cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i; j++){
           cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void print5(int n){
    for(int i=n;i>0;i--){  //for(int i=0;i<n;i++)
        for(int j=0; j<i; j++){ //for(j=0;j<n-i;j++)
           cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void print6(int n){
    for(int i=n;i>0;i--){  //for(int i=0;i<n;i++)
        for(int j=1; j<=i; j++){ //for(j=0;j<n-i;j++)
           cout<<j<<" ";
        }
        cout<<endl;
    }
//or
/*for(int i=0; i<n; i++){
for(int j=1; j<=n-i; j++){
cout<<j<<" ";
}
cout<<endl;
}*/
    cout<<endl;
}
void random(int n){
for(int i=1; i<=n; i++){
   for(int j=1; j<=n-i+1; j++){
cout<<" ";
}
for(int k=1; k<=i; k++){
cout<<"* ";
}
cout<<endl;
}
}
void print7(int n){
 for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print8(int n){
 for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<2*(n-i)-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print9(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<2*(n-i)-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print10(int n){
         for(int i=1;i<=2*n-1;i++){
            int star = i;
            if(i>n) star = 2*n - i;
        for(int j=1; j<=star; j++){
           cout<<"*";
        }
        cout<<endl;
        }
    }
    void print11(int n){
        for(int i=0;i<n;i++){
        for(int j=0; j<=i; j++){
           if((i+j)%2==0){
            cout<<"1 ";
           }else{
            cout<<"0 ";
           }
        }
        cout<<endl;
        }

    }
 void print12(int n){
         for(int i=1;i<=n;i++){
        for(int j=1; j<=i; j++){
           cout<<j;
        }
        for(int j=1; j<=2*(n-i); j++){
           cout<<" ";
        }
        for(int j=i; j>=1; j--){
           cout<<j;
        }
        cout<<endl;
    }
    }
int main(){
int t;
cin>>t;
for(int i=0; i<t; i++){
    int n;
    cin>>n;
  print12(n);

}
}