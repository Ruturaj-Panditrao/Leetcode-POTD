// https://leetcode.com/problems/majority-element/

// Using Hashmap
// SC->O(N) 
// TC->O(N)

class Solution 
{
public:
    int majorityElement(vector<int>& nums)
    {
        int n = nums.size();
       map<int,int>mp;
       for(auto it : nums) mp[it]++;
       int ans = -1;
       for(auto it : mp) if(it.second>n/2) ans = it.first;
       return ans;
    }
};
