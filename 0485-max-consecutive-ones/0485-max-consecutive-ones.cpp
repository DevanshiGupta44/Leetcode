class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m=0,c=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] == 1){
                c++;
            }
            else{
                m = max(c,m);
                c=0;
            }
        }
        m=max(c,m);
        return m;
    }
};