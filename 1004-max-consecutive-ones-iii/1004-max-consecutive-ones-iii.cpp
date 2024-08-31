class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxi=0,l=0,h=0,n=nums.size(),zero=0;
        while(h<n){
            if(nums[h]==0)zero++;
            while(zero>k){
                if(nums[l]==0) zero--;
                l++;
            }
            maxi=max(maxi,h-l+1);
            h++;
        }
        return maxi;
    }
};
// class Solution {
// public:
//     int longestOnes(vector<int>& nums, int k) {
//         int Max = 0, low = 0, high = 0, zeros = 0;
//         while (high < nums.size()) {
//             if (nums[high] == 0) zeros++;
//             while (zeros > k) {
//                 if (nums[low] == 0) zeros--;
//                 low++;
//             }
//             Max = max(Max, high - low + 1);
//             high++;
//         }
//         return Max;
//     }
// };
