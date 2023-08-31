class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> s;
        int size = nums.size();
        for(int i=0;i<size;i++){
            int num = nums[i];
            int moreneeded = target-num;
            if(s.find(moreneeded)!=s.end()){
                return {s[moreneeded],i};
            }
            s[num]=i;
        }
        return {-1,-1};
    }
};