class Solution {
public:
    bool isPerfectSquare(int num) {
        int l=0,r=num;
        while(l<=r){
            int mid = l+ (r-l)/2;
            if(pow(mid,2) == num){
                return true;
            }else if(pow(mid,2) < num){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return false;
    }
};