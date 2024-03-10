class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Brute-> use any sort algo TC:->O(nlogn)
        // sort(nums.begin(),nums.end());
        
        // Better -> Using Cnt variables TC:-> O(2n)
        
        int cnt0 = 0 , cnt1 = 0 , cnt2 = 0;
        int n = nums.size();
        
        for(int i = 0;i<n ; i++){
            if(nums[i]==0){
                cnt0++;
            }else if(nums[i]==1){
                cnt1++;
            }else{
                cnt2++;
            }
        }
        
        int index = 0;
        while(cnt0>0){
            nums[index] = 0;
            index++;
            cnt0--;
        }
        while(cnt1>0){
            nums[index] = 1;
            index++;
            cnt1--;
        }
        while(cnt2>0){
            nums[index] = 2;
            index++;
            cnt2--;
        }
        
        
    }
};