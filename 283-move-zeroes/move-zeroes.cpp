class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        vector<int>temp;
        for(int i = 0; i<size; i++){
            if(nums[i]!=0){
                temp.push_back(nums[i]);
            }
        }
        for(int i = 0;i<temp.size();i++){
            nums[i] = temp[i];
        }
        for(int i = temp.size();i<size;i++ ){
            nums[i] = 0;
        }
    }
};