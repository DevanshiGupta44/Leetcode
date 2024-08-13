class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum=nums[0];
        int maxi = nums[0];
        for(int i=1;i<n;i++){
            sum = max(sum+nums[i] , nums[i]);
            maxi = max(sum,maxi);
        }
        return maxi;
    }
};




