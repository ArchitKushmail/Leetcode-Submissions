class Solution {
public:
    bool possible(vector<int>& bloomDay,int day, int m, int k){
        int cnt = 0;
        int noofB = 0;
        for(int i = 0;i<bloomDay.size();i++){
            if(bloomDay[i] <= day){
                cnt++;
            }
            else{
                noofB += (cnt/k);
                cnt = 0;
            }
        }
        noofB += (cnt/k);
        if(noofB >= m){
            return 1;
        }
        else{
            return 0;
        }
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        long long val = m * 1ll * k * 1ll;
        if(val > bloomDay.size()){
            return -1;
        }
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i = 0;i<bloomDay.size();i++){
            mini = min(mini,bloomDay[i]);
            maxi = max(maxi,bloomDay[i]);
        }

        int low = mini, high = maxi;
        int ans = high;
        while(low <= high){
            int mid = (low + high)/2;

            if(possible(bloomDay,mid,m,k)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};