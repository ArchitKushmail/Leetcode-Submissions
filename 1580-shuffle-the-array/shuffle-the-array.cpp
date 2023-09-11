class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        int size = nums.size();
        
       
            int j = 0,k=n;
            while(j<n && k<size){
                ans.push_back(nums[j]);
                ans.push_back(nums[k]);
                j++;
                k++;
            }
        return ans;   
    }
};