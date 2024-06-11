class Solution {
  public:
    void findcombo(int ind, int target,vector<int>& arr,vector<vector<int>>& ans,vector<int>& ds){
    if(ind == arr.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }
    
    if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        findcombo(ind,target-arr[ind],arr,ans,ds);
        ds.pop_back();
    }
    
    findcombo(ind+1,target,arr,ans,ds);
}
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int>> combinationSum(vector<int> & combinations, int target) {
        // Your code here
        vector<vector<int>> ans;
        vector<int> ds;
        findcombo(0,target,combinations,ans,ds);
        return ans;
    }
};