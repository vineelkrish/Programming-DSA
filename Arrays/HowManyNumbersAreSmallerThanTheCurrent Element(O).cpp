#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
            
           vector<int> count(101,0);
           vector<int> ans;
           for(int i=0;i<nums.size();i++)
           {
            count[nums[i]]++;
           }
           for(int i=1;i<101;i++)
           {
            count[i]+=count[i-1];
           }
           for(int i=0;i<nums.size();i++)
           {
            if(nums[i]==0) return ans.push_back(0);
            if(nums[i]>0)
            ans.push_back(count[nums[i]-1]);
           }
           
           return ans;
        }
    };