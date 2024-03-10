class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>st;
        for (char c : s) {
        if (isalnum(c)) {
            st.push_back(tolower(c));
        }
    }
    
        vector<char> st2 = st;
        reverse(st2.begin(),st2.end());
        if(st2==st){
            return true;
        }
        return false;
            
    }
};