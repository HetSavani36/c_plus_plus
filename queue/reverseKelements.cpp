#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void display(queue<int>& q){
    int n=q.size();
    for(int i=0;i<n;i++){
        int x=q.front();
        cout<<q.front()<<" ";
        q.pop();
        q.push(x);
    }
}

void reverse(queue<int>& q,int k){//using stack
    stack<int> st;
    int n=q.size();
    for(int i=0;i<k;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    for(int i=0;i<n-k;i++){
        int x=q.front();
        q.pop();
        q.push(x);
    }
    
}

int main(){

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    int k=2;
    reverse(q,k);
    display(q);
    return 0;
}