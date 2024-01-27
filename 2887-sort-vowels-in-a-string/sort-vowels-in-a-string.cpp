class Solution {
public:
    string sortVowels(string s) {
        vector<int>lower(26,0);
        vector<int>upper(26,0);
        int size = s.size();
        for(int i = 0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ){
                int index = s[i]-'a';
                lower[index]++;
                s[i] = '#';
            }else if(s[i]=='A' || s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U' ){
                int index = s[i]-'A';
                upper[index]++;
                s[i] = '#';
            }
        }
        string ans;
        //Uppercase
        for(int i = 0;i<26;i++){
            char c = 'A'+i;
            while(upper[i]){
                ans+=c;
                upper[i]--;
            }
        }
        //Lowercase
        for(int i = 0;i<26;i++){
            char c = 'a'+i;
            while(lower[i]){
                ans+=c;
                lower[i]--;
            }
        }
        
        //Placing
        int j = 0;
        for(int i = 0;i<size;i++){
            if(s[i]=='#'){
                s[i]=ans[j];
                j++;
            }
        }
        return s;
    }
};