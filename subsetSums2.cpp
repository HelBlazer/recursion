#include<bits/stdc++.h>
using namespace std;

void helper(int i,vector<vector<int>> &ans,vector<int> &nums,vector<int> temp){
    ans.push_back(temp);
    for(int j=i;j<nums.size();j++){
        if()
    }
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> temp;
    sort(nums.begin(),nums.end());
    helper(0,ans,nums,temp);
    return ans;
}

int main(){
    vector<int> nums={1,2,2};
    vector<vector<int>> ans=subsetsWithDup(nums);
    for(auto x : ans){
        for(auto y : x)
            cout<<y<<" ";
        cout<<endl;
    }
        
    return 0;
}