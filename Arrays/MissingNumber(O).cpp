#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int missingNumber(vector<int>& nums) {
           int n=nums.size();
           int arr_xor=nums[0];
           int og_xor=0;
           for(int i=1;i<nums.size();i++)
           arr_xor^=nums[i];

           for(int i=1;i<=nums.size();i++)
           og_xor^=i;

           return arr_xor^og_xor;

        }
    };