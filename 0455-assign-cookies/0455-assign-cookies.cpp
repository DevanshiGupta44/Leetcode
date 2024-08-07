class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        std::sort(g.begin(),g.end());
        std::sort(s.begin(),s.end());
        int m = g.size() , n = s.size();
        
        int cnt=0;
        for(int i=0,j=0 ; (i<m) && (j<n) ; ){
            if(g[i] <= s[j]){
                cnt++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return cnt;
    }
};