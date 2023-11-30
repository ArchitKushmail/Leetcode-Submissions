class Solution {
public:
    int mySqrt(int x) {
        int low = 1;
        int high = x;
        int ans = 0;
       
        while(low<=high){
            long long int mid = low + (high-low)/2;
             long long int square = mid* mid;
            if(square == x){
                return mid;
            }else if(square>x){
                high = mid-1;
                
            }else {
                ans = mid;
                low = mid+1;
                
            }
           
        }
        return ans;
    }
};