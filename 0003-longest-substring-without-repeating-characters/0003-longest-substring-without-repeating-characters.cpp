class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map<char,int> mpp;
        int l=0;
        int r=0;
        int maxlen=0;
        while(r<n){
            if(mpp.find(s[r])==mpp.end() || mpp[s[r]] < l){
                mpp[s[r]]=r;
                maxlen=max(maxlen,r-l+1);
                r++;
            }else{
                l=mpp[s[r]]+1;
            }
        }
        return maxlen;
    }
};


 