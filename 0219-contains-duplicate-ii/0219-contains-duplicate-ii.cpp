class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        std::unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            int x = nums[i];
            if(mpp.find(nums[i])!=mpp.end()){
                if(abs(i-mpp[x]) <= k){
                    return true;
                }
            }
            mpp[x] = i;
        }
        return false;
    }
};