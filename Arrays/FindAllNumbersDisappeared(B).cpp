#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> findDisappearedNumbers(vector<int>& nums) {
            vector<int> ans;
           for(int i=1;i<=nums.size();i++)
           {
            bool flag=false;
            for(int j=0;j<nums.size();j++)
            {
                if(i==nums[j])
                {
                    flag=true;
                }
            }
            if(!flag) ans.push_back(i);
           }
           return ans;
        }
    };