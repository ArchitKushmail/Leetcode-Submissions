class Solution {
public:
int maxElement(vector<int>&arr,int n){
    int maxi = INT_MIN;
    for(int i = 0;i<n;i++){
        maxi = max(maxi,arr[i]);
    }
    return maxi;
}
int sumOfElements(vector<int>&arr,int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int findNoOfDays(vector<int>&arr,int cap){
    int days = 1 , load = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] + load>cap){
            days++;
            load = arr[i];
        }else{
            load+=arr[i];
        }
    }
    return days;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int low = maxElement(weights,weights.size());
    int high = sumOfElements(weights,weights.size());
    while(low<=high){
        int mid = (low+high)/2;
        int numberOfDays = findNoOfDays(weights,mid);
        if(numberOfDays<=days){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return low;
    }
};