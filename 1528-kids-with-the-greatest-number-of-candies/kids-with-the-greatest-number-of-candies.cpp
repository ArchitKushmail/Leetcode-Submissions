class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = INT_MIN;
        for(int i=0;i<candies.size();i++){
            if(candies[i]>max){
                max = candies[i];
            }
        }
        vector<bool>ans;
        for(int j=0;j<candies.size();j++){
            if(candies[j]+extraCandies>=max){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};