#include<iostream>
#include<stack>
using namespace std;

void pushAtBottom(stack<int>& st,int x){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(x);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
void pushBottomRec(stack<int>& st,int val){
        if(st.size()==0){
            st.push(val);
            return;
        }
        int x=st.top();
        st.pop();
        pushBottomRec(st,val);
        st.push(x);
}

void display(stack<int>& st){
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x=st.top();
        st.pop();
        temp.push(x);
    }
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    pushAtBottom(st,0);
    //display(st);
    pushBottomRec(st,-10);
    display(st);
    return 0;
}