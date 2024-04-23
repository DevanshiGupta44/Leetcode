class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // int n = nums.size();
        // for (int i = 1; i < n; i++) {
        //     if (nums[i] == nums[i - 1])
        //         return true;
        // }
        // return false;
        //code
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i] == nums[i - 1]){
                return true;
            }
        }
        return false;
    }
};
// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         int n = nums.size();
//         for(int i=0;i<n-1;i++){
//             for(int j=0;j<n;j++){
//                 if(nums[i] == nums[j]){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };


// unordered_map<int,int> mpp;
//         int n = nums.size()-1;
//         for(int i=0;i<n;i++){
//             mpp[nums[i]]++;
//         }
//         for(int i=0;i<n;i++){
//             if(mpp[nums[i]] == 1){
//                 return false;
//             }
//         }
//         return true;