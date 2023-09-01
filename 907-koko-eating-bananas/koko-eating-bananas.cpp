class Solution {
public:
int maxE(vector<int>&arr,int n){
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        maxi = max(arr[i],maxi);
    }
    return maxi;
}
long timed (vector<int>&arr,int mid,int n){
    long totalTime = 0;
    for(int i = 0;i<n;i++){
        totalTime += arr[i] / mid;
            if (arr[i] % mid != 0)
            {
                totalTime++;
            }
        }
        return totalTime;
    }
   

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        int high = maxE(piles,n);
        int ans = 0;
        while(low<=high){
            int mid = (low+high)/2;
            long totalTime = timed(piles,mid,n);
            if(totalTime<=h){
                ans = mid;
                high = mid-1;
            }else {
                low = mid+1;
            }
        }
        return ans;
    }
};