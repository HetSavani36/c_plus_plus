#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter size: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool flag;


    for(int i=0;i<n-1;i++){
        flag=false;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]) {
                swap(a[j],a[j+1]);
                flag=true;
                }
        }
        if(flag==false) break;
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}