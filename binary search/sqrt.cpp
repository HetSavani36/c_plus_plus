#include<iostream>
using namespace std;

int main(){

    int n=2;

    int ans=-1,low=0,high=n,mid=low+(high-low)/2;

    while(low<=high){
        if(mid*mid==n){
            ans=mid;
            break;
        }
        else if(mid*mid>n) high=mid-1;
        else if(mid*mid<n){
            ans=mid;
            low=mid+1;
        }
        mid=low+(high-low)/2;
    }
    cout<<ans;
    return 0;
}