class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
      vector<int>ans;
        int size = nums.size();
        for(int i = 0;i<size;i++){
            int temp = nums[nums[i]];
            ans.push_back(temp);
        }
        return ans;
    }
};