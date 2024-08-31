

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int Max = 0, low = 0, high = 0, zeros = 0;
        while (high < nums.size()) {
            if (nums[high] == 0) zeros++;
            while (zeros > k) {
                if (nums[low] == 0) zeros--;
                low++;
            }
            Max = max(Max, high - low + 1);
            high++;
        }
        return Max;
    }
};
