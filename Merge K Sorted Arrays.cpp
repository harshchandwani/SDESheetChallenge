#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&nums, int k)
{
    vector<int>v;
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums[i].size();j++){
            v.push_back(nums[i][j]);
        }
    }
    sort(v.begin(), v.end());
    return v;
    // Write your code here. 
}
