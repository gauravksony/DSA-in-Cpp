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
        // for numbers increasing order
        for(int j=1; j<=i; j++){
           cout<<j;
        } 
        //for space
        for(int j=1; j<=2*(n-i); j++){
           cout<<" ";
        }
        //for no. in reverse order
        for(int j=i; j>=1; j--){
           cout<<j;
        }
        cout<<endl;
    }
    }
    void print13(int n){
        int num = 1;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
            cout<<num<<" ";
            num+=1;
            }
            cout<<endl;
        }
    }
     void print14(int n){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                char ch = 'A'+(j-1);
            cout<<ch<<" ";
            }
            cout<<endl;
        }
    }
     void print15(int n){
        for(int i=1; i<=n; i++){
            for(int j=n; j>=i; j--){
                char ch = 'A'+(n-j);
            cout<<ch<<" ";
            }
            cout<<endl;
        }
    }
     void print16(int n){
        for(int i=1; i<=n; i++){
            char ch = 'A'+(i-1);
            for(int j=1; j<=i; j++){
            cout<<ch<<" ";
            }
            cout<<endl;
        }
    }
    void print17(int n){
    for(int i=1; i<=n; i++){
         for(int j=1; j<=n-i; j++){
            cout<<" ";
        }//space
        char ch;
        for(int j=1; j<=(2*i)-1; j++){
            if(j<=i){
                ch = 'A'+(j-1);
                cout<<ch;
            }else{
                ch--;
                cout<<ch;
            }
        }
        cout<<endl;
    }
    }
     void print18(int n){
        for(int i=1; i<=n; i++){
            char ch = 'A' + (n-i);
            for(int j=1; j<=i; j++){  
                char p = ch + (j-1);
            cout<<p<<" ";
            }
            cout<<endl;
        }
    }
/* or you can also write this code -->

     void print18(int n){
        for(int i=1; i<=n; i++){
            for(char j= 'A'+(n-i); j<='A'+(n-1); j++){  
            cout<<j<<" ";
            }
            cout<<endl;
        }
    }*/
int main(){
int t;
cin>>t;
for(int i=0; i<t; i++){
    int n;
    cin>>n;
  print18(n);

}
}