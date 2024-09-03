class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        double maxi = INT_MIN;

        // Calculate the sum of the first k elements
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        // Initialize maxi with the average of the first k elements
        maxi = static_cast<double>(sum) / k;

        // Sliding window: Move the window across the array
        for (int i = k; i < n; i++) {
            sum += nums[i] - nums[i - k];
            maxi = max(maxi, static_cast<double>(sum) / k);
        }

        return maxi;
    }
};
