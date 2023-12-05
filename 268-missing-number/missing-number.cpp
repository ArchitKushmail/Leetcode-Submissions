class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            nums[i] = nums[i] < 0 ? nums[i] + n : nums[i];
        }
        
        int total = n * (n + 1) / 2;
        for (int num : nums) {
            total -= num;
        }
        
        return total;
    }
};