class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int ith;
        for(int i=0;i<arr.size();i++){
            ith=arr[i];
            for(int j=0;j<arr.size();j++){
                if(ith==2*arr[j] && j!=i){
                    return true;
                }
            }
        }
        return false;
    }
};