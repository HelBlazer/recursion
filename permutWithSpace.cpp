#include <iostream>

using namespace std;

void permut(string ip,string op){
    if(ip.length()==0){
        cout<<op<<endl;
        return;
    }
    string op1=op+ip[0];
    string op2=op+'_'+ip[0];
    ip.erase(ip.begin()+0);
    permut(ip,op1);
    permut(ip,op2);
}

void change(string ip,string op){
    op.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    permut(ip,op);
}

int main()
{
    string ip="abc",op="";
    change(ip,op);
    return 0;
}