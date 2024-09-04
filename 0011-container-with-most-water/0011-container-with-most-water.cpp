class Solution {
public:
    int maxArea(vector<int>& h) {
        int ans=0,left=0;
        int right=h.size()-1;
        while(left<right){
            ans=max(ans,((right-left)*(min(h[left],h[right]))));
            if(h[left]<h[right]){
                left++;
            }else{
                right--;
            }
        }
        return ans;
    }
};

