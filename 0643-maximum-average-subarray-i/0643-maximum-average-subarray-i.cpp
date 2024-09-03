class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        double maxi = INT_MIN;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        maxi = static_cast<double>(sum) / k;
        for (int i = k; i < n; i++) {
            sum += nums[i] - nums[i - k];
            maxi = max(maxi, static_cast<double>(sum) / k);
        }
        return maxi;
    }
};
