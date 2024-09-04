class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        std::unordered_map <int,int> mpp;
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            mpp[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            if(mpp[nums2[i]] && count(ans.begin(),ans.end(),nums2[i]) <= 0){
                ans.push_back(nums2[i]);
            }
        }
        return ans;
    }
};



// Two Pointers

// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         sort(nums1.begin(), nums1.end());
//         sort(nums2.begin(), nums2.end());
//         vector<int> ans;
//         int i=0, j= 0;
//         int n1 = nums1.size(), n2 = nums2.size();
//         while(i < n1 && j < n2){
//             if(nums1[i] == nums2[j]){
//                 if(count(ans.begin(), ans.end(), nums1[i]) <= 0){
//                     ans.push_back(nums1[i]);
//                 }
//                 i++;
//                 j++;
//             }
//             else if(nums1[i] > nums2[j]){
//                 j++;
//             }
//             else{
//                 i++;
//             }
//         }
//         return ans;

//     }
// };
