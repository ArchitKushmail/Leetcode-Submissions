class Solution {
public:
    string reverseWords(string s) {
        int size = s.size() , i =0;
        string ans= "";
        while(i<size){
            string temp = "";
            while(s[i] == ' ' && i<size){
                i++;
            }
            while(s[i]!=' ' && i<size){
                temp += s[i];
                i++;
            }
            if(temp.size()>0){
                if(ans.size()==0){
                    ans = temp;
                }else{
                    ans = temp + " " + ans;
                }    
            }
        }
        return ans;
    }
};