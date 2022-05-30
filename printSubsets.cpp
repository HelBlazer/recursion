#include<bits/stdc++.h>
using namespace std;

void printSubset(string ip,string op){
    if(ip.length()==0){
        cout<<op;
        cout<<endl;
        return;
    }
    string op1=op,op2=op;
    //include
    op2.push_back(ip[0]);
    //don't include
    ip.erase(ip.begin()+0);
    printSubset(ip,op1);
    printSubset(ip,op2);
    return;
}

int main(){
    string ip="abc",op="";
    printSubset(ip,op);
    return 0;
}