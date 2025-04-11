#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int,int> ans;
            for(int i=0;i<nums.size();i++){
                int complement=target-nums[i];
                if(ans.find(complement)!=ans.end()){
                    return {ans[complement],i};
                }
                ans[nums[i]]=i;
            }
            return {};
        }
    };