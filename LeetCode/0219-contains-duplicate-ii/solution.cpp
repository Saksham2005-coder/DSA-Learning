for(int i=0;i<n;i++) {
            if(mp.find(nums[i]) != mp.end()) {
                if(abs(i-mp[nums[i]]) <= k)
        int n=nums.size();

    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
public:
class Solution {
                return true;
            }
            mp[nums[i]]=i;
        }
        return false;
    }
};