class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxW = 0;
        for(int i = 0;i<accounts.size();i++){
            int amount = 0;
            for(int j = 0;j<accounts[i].size();j++){
                amount = amount + accounts[i][j];
            }
            if(amount>maxW){
                maxW = amount;
            }
            
        }
        return maxW;
    }
};