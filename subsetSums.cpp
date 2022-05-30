#include<bits/stdc++.h>
using namespace std;

void helper(int i,int sum,int N,vector<int> &ans,vector<int> &arr){
    if(i==N){
        ans.push_back(sum);
        return;
    }
    //include in sum
    helper(i+1,sum+arr[i],N,ans,arr);
    //don't include
    helper(i+1,sum,N,ans,arr);
}

vector<int> solve(vector<int> &arr,int N){
    vector<int> ans;
    helper(0,0,N,ans,arr);
    sort(ans.begin(),ans.end());
    return ans;
}


int main(){
    vector<int> arr={5,2,1};
    int n=arr.size();
    vector<int> slv=solve(arr,n);
    for(auto x : slv)
        cout<<x<<" ";
    return 0;
}