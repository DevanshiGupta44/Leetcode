class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 0) return -1;
        
        int pivot = GetPivot(nums);
        int result = -1;
        
        if (nums[pivot] <= target && target <= nums[n-1]) {
            result = BinarySearch(nums, pivot, n-1, target);
        } else {
            result = BinarySearch(nums, 0, pivot-1, target);
        }
        
        return result;
    }
    
private:
    int GetPivot(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;
        while (s < e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] >= nums[0]) {
                s = mid + 1;
            } else {
                e = mid;
            }
        }
        return s;
    }
    
    int BinarySearch(vector<int>& nums, int start, int end, int target) {
        int s = start;
        int e = end;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return -1;
    }
};









