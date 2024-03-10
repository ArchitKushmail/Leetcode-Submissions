class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size();
        int size2 = nums2.size();
        vector<int>ans;
        
        set<int>st1;
        set<int>st2;
        
        for(int i = 0;i<size1;i++){
            st1.insert(nums1[i]);
        }
        for(int i = 0;i<size2;i++){
            st2.insert(nums2[i]);
        }
        
        for(auto it1:st1){
            for(auto it2 : st2){
                if(it1==it2){
                    ans.push_back(it1);
                }
            }
        }
        return ans;
        
    }
};