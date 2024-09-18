class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        double sum = 1;
        int ans = 0;
        int len = nums.size();

        if (k <= 1) {
            return 0;
        }

        while (right <= len - 1) {
            while (sum < k && right < len) {
                sum = sum * nums[right];
                right++;
            }
            ans = right - left + 1;
            sum = sum / nums[left];
            left++;
        }
        return ans;
    }
};