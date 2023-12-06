class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int size = s.size();
        for(int i = 0;i<size;i++){
            char ch = s[i];
            // Opening Brackets
            if(ch == '(' || ch=='{' || ch=='['){
                st.push(ch);
            }else {
                // Closing Bracket
                if(!st.empty()){
                    char topElement = st.top();
                    if(ch==')' && topElement == '('){
                       st.pop(); 
                    }else if(ch==']' && topElement == '['){
                        st.pop();
                    }else if(ch=='}' && topElement == '{'){
                        st.pop();
                    }else{
                        // No Case Matched
                        return false;
                    }
                }else{
                    return false;
                }
            }
        }
        if(st.empty()){
            // Valid Expression 
            return true;
        }
        return false;
    }
};