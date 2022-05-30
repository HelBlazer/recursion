#include <bits/stdc++.h>
using namespace std;

void insert(stack<int> &s,int t){
    if(s.size()==0){
        s.push(t);
        return;
    }
    int temp2=s.top();
    s.pop();
    insert(s,t);
    s.push(temp2);
}

void reverse_stack(stack<int> &s){
    if(s.size()==0)
        return;
    int temp=s.top();
    s.pop();
    reverse_stack(s);
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
    reverse_stack(s);
    while (!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}