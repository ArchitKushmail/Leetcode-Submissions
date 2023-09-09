class Solution {
public:
    bool isPalindrome(int x) {
        bool ans1 = false;
        long long ans = x;
        long long temp =0;
        while(ans>0){
            int rem = ans%10;
            temp = temp*10 + rem;
            ans = ans /10;
        }
        if(x == temp){
            ans1 = true;
        }

        return ans1;
    }
};