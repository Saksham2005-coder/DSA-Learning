class Solution {
public:
    int minElement(vector<int>& nums) {
        int minimum = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            int n = nums[i];
            int sum = 0;

            while (n > 0) {
                int digit = n % 10;
                sum = sum + digit;
                n = n / 10;
            }

            if (sum < minimum) {
                minimum = sum;
            }
        }

        return minimum;
    }
};