class Solution {
public:

   set<vector<int>>ans;

   void recursion(int index,vector<int>&nums,vector<int>curr){
       if(index==nums.size())
       {
           sort(curr.begin(),curr.end());
           ans.insert(curr);
           return;
       }
       recursion(index+1,nums,curr);
       curr.push_back(nums[index]);
       recursion(index+1,nums,curr);
   }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans1;
        vector<int>curr;
        recursion(0,nums,curr);
        for(auto x:ans){
            ans1.push_back(x);
        }
        return ans1;
    }
};