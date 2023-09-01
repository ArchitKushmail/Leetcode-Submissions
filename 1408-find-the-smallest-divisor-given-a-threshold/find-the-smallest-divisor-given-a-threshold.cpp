class Solution {
public:
int sumBy(vector<int> arr, int div ){

     int n = arr.size();

     int sum = 0; 

       for(int i = 0; i<n; i++){

            sum += ceil((double)(arr[i]) / (double)(div));

       }

 return sum;

     

}
    int smallestDivisor(vector<int>& arr, int limit) {
        
         int n = arr.size();

   if(n > limit) return -1;                   
   int maxi = *max_element(arr.begin() , arr.end()); 

           int low  = 1 , high = maxi;

            while(low<=high){

                  int mid  = (low+high)/2;

                  if(sumBy(arr,mid)<=limit){

                       high = mid-1;

                  }else{

                      low  = mid+1;

                  }

            }

   return low ; 
    }
};