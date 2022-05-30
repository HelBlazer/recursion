#include<bits/stdc++.h>
using namespace std;

void nToOne(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    nToOne(n-1);
}

void oneToN(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }
    oneToN(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;
    oneToN(n);
    cout<<endl;
    nToOne(n);
    cout<<endl;
    return 0;
}