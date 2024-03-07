class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>ans;
        int size = nums.size();
        for(int i = 0;i<size;i++){
            if(nums[i]!=val){
                ans.push_back(nums[i]);
            }
        }
        int n = ans.size();
        
      for(int i = 0;i<n;i++){
      nums[i] = ans[i];    
      }
        return n;
    }
};