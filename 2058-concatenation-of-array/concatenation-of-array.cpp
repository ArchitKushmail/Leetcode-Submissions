class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size() * 2;
        vector<int>ans;
        for(int i = 0;i<size;i++){
            int temp;
            if(i<nums.size()){
                 temp = nums[i];
            }else{
                 temp = nums[i-nums.size()];
            }
            ans.push_back(temp);
            
        }
        return ans;
    }
};