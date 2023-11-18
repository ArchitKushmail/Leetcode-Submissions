class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int size = nums.size();
        vector<int>ans;
        for(int i = 0; i<size;i++){
            int count = 0;
            for(int j = 0;j<size;j++){
                if(j!=i && nums[i]>nums[j]){
                    count ++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
    
};