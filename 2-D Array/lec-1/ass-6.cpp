#include<iostream>
using namespace std;

int main(){

    int n,m;
    cout<<"enter row/column: ";
    cin>>n;
    
    int a[n][n];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==n/2 || j==n/2) cout<<a[i][j];
        }
    }
    return 0;
}