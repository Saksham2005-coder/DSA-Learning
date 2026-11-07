class Solution {
public:
    int minElement(vector<int>& nums) {
        int a = *min_element(nums.begin(),nums.end());
        int sum = 0;
        while(a>0) {
            int digit = a % 10;
            sum = sum + digit;
            a = a/10;
        }
        return sum;
    }
};