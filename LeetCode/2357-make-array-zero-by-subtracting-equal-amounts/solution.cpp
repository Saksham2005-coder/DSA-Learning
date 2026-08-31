class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
        
            if(nums[i] !=0)
        }
            mp[nums[i]]++;
        return mp.size();