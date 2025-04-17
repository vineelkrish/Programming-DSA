#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> findDisappearedNumbers(vector<int>& nums) {
            vector<int> ans;
            sort(nums.begin(),nums.end());
           for(int i=1;i<=nums.size();i++)
           {
              int start=0;
              int end=nums.size()-1;
              bool flag=false;
              while(start<=end)
              {
                int mid=(start+end)/2;
                if(nums[mid]==i)
                {
                    flag=true;
                    break;
                }
                else if(i>nums[mid]) start=mid+1;
                else end=mid-1;
              }
              if(!flag)
              ans.push_back(i);
           }
           return ans;
        }
    };