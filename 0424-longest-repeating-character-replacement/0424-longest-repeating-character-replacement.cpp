class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mpp;
        int ans=0;
        int left=0,right=0,maxf=0;
        for(int right=0;right<s.size();right++){
            mpp[s[right]] = 1+ mpp[s[right]];
            maxf = max(maxf,mpp[s[right]]);
            if((right-left+1)-maxf > k){
                mpp[s[left]] -=1;
                left++;
            }else{
                ans=max(ans,(right-left+1));
            }
        }
        return ans;
    }
};


