// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
        
//         int FirstOcc(vector<int>& nums, int target){
//             int start = 0
//             int end = nums.size() - 1;
//             int mid = start + ( start - end / 2);
//             int ans = -1;
            
//             while(start<=end){
//                 if(nums[mid] == target){
//                     ans = mid;
//                     end = mid - 1;
//                 }
//                 if(nums[mid] < target){
//                     start = mid + 1;
//                 }
//                 else{
//                     end = mid - 1;
//                 }
//                 mid = start + ( start - end / 2);
//             }
//             return -1;
//         }
        
//         int LastOcc(vector<int>& nums, int target){
//             int start = 0
//             int end = nums.size() - 1;
//             int mid = start + ( start - end / 2);
//             int ans = -1;
            
//             while(start<=end){
//                 if(nums[mid] == target){
//                     ans = mid;
//                     start = mid + 1;
//                 }
//                 if(nums[mid] < target){
//                     start = mid + 1;
//                 }
//                 else{
//                     end = mid - 1;
//                 }
//                 mid = start + ( start - end / 2);
//             }
//             return -1;
//         }
        
//         vector<int> searchRange(vector<int>& nums, int target) {
//         vector<int> result(2, -1); // Initialize result with -1
        
//         result[0] = FirstOcc(nums, target);
//         result[1] = LastOcc(nums, target);
        
//         return result;
//     }
// }
// };
#include <vector>
using namespace std;

class Solution {
public:
    int FirstOcc(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int ans = -1;
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            
            if (nums[mid] == target) {
                ans = mid;
                end = mid - 1;
            } else if (nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return ans;
    }
    
    int LastOcc(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int ans = -1;
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            
            if (nums[mid] == target) {
                ans = mid;
                start = mid + 1;
            } else if (nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1); // Initialize result with -1
        
        result[0] = FirstOcc(nums, target);
        result[1] = LastOcc(nums, target);
        
        return result;
    }
};
