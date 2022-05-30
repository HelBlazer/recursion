#include<bits/stdc++.h>
using namespace std;

bool chck(int a[],int i,int n){
    if(i==n-1)
        return true;
    if(a[i]>a[i+1])
        return false;
    return chck(a,i+1,n); 
}

int main(){
    int a[]={1,3,4,5,6,6,7};
    int n=sizeof(a)/sizeof(int);
    cout<<chck(a,0,n);
    return 0;
}