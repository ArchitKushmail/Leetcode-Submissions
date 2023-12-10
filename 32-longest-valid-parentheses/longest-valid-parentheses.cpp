class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>st;
        st.push(-1);
        int maxlength = 0;
        for(int i=0;i<s.size();i++){
            char ch = s[i];
            if(ch=='('){
                st.push(i);    
            }else{
                st.pop();
                if(!st.empty()){
                    int len = i - st.top();
                    maxlength = max(len , maxlength);
                }else{
                    st.push(i);
                }
            }
        }
        return maxlength;
    }
};