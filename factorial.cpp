#include<bits/stdc++.h>
using namespace std;

//space & time-> O(N)
int factorial(int n){
    if(n==1 || n==0)
        return 1;
    return n*factorial(n-1);
}

int main(){
    cout<<factorial(7);
    return 0;
}