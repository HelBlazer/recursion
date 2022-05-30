#include<bits/stdc++.h>
using namespace std;

void solve(int open,int close,string op,vector<string> &ans){
    if(open==0 && close==0){
        ans.push_back(op);
        return;
    }
    if(open!=0){
        string op1=op;
        op1.push_back('(');
        solve(open-1,close,op1,ans);
        //return;
    }
    if(close>open){
        string op2=op;
        op2.push_back(')');
        solve(open,close-1,op2,ans);
        return;
    }
}

vector<string> gen(int n){
    vector<string> ans;
    int close=n,open=n;
    string op="";
    solve(open,close,op,ans);
    return ans;
}

int main(){
    int n=3;
    vector<string> ans=gen(n);
    for(auto x : ans)
        cout<<x<<endl;
    return 0;
}