class Solution {
public:
    int numTeams(vector<int>& r) {
        int cnt=0;
        int n = r.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(r[i] < r[j]){
                    for(int k=j;k<n;k++){
                        if(r[j] < r[k]){
                            cnt++;
                        }
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(r[i] > r[j]){
                    for(int k=j;k<n;k++){
                        if(r[j] > r[k]){
                            cnt++;
                        }
                    }
                }
            }
        }
        return cnt;
    }
};