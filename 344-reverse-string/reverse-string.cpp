class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> ans;
        int size = s.size();
        for(int i=size-1;i>=0;i--){
            ans.push_back(s[i]);
        }
        for(int i=0;i<size;i++){
            s[i] = ans[i];
        }
    }
};