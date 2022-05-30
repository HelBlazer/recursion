#include <bits/stdc++.h>
using namespace std;

int kTh(int n,int k){
    if(n==1 && k==1)
        return 0;
    int mid=pow(2,n-2);
    if(k<=mid)
        return kTh(n-1,k);
    else return !(kTh(n-1,k-mid));
}

int main(){
    int n,k;
    cin>>n>>k;
    cout<<kTh(n,k);
    return 0;
}