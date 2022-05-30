#include<bits/stdc++.h>
using namespace std;

void insert(vector<int> &arr,int t){
    if(arr.size()==0 || arr[arr.size()-1]<=t){
        arr.push_back(t);
        return;
    }
    int val=arr[arr.size()-1];
    arr.pop_back();
    insert(arr,t);
    arr.push_back(val);
}

void sortArr(vector<int>& arr){
    if(arr.size()==0)
        return;
    int temp=arr[arr.size()-1];
    arr.pop_back();
    sortArr(arr);
    insert(arr,temp);
}

int main(){
    vector<int> arr={8,7,1,2,4,0,9,-1};
    int n=arr.size()-1;
    sortArr(arr);
    for(auto x : arr)
        cout<<x<<" ";
    return 0;
}