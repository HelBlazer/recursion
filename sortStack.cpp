#include<bits/stdc++.h>
using namespace std;

void insert(stack<int> &s,int t){
    if(s.empty() || t<=s.top()){
        s.push(t);
        return;
    }

    int temp2=s.top();
    s.pop();
    insert(s,t);
    s.push(temp2);
}

void sortStack(stack<int> &s){
    if(s.empty())
        return;
    int temp=s.top();
    s.pop();
    sortStack(s);
    insert(s,temp);
}

int main(){
    stack<int> s;
    s.push(8);
    s.push(7);
    s.push(1);
    s.push(2);
    s.push(4);
    s.push(0);
    s.push(9);
    s.push(-1);
    sortStack(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}