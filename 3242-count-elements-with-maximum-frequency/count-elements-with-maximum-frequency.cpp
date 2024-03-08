class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>freq(100,0);
        for(int num :nums){
            freq[num-1]++;
        }
        
        sort(freq.begin(),freq.end());
        int indexMax = freq.size()-1;
        
        int ans = freq[indexMax];
        
        while(indexMax>0 && freq[indexMax] == freq[indexMax-1]){
            ans+=freq[indexMax];
            indexMax--;
        }
        return ans;
    }
};