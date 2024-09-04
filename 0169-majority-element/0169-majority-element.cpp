class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int maxi=0;
        for(const auto & pair : mpp){
            maxi=max(maxi,pair.second);
        }
        for(const auto & pair : mpp){
            if(pair.second == maxi){
                return pair.first;
            }
        }
        return -1;
    }
};