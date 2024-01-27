class Solution {
public:
    int nums(char val){
        int num = 0;
        if(val=='I'){
            num=1;
        }else if(val=='V'){
            num=5;
        }else if(val=='X'){
            num=10;
        }else if(val=='L'){
            num=50;
        }else if(val=='C'){
            num=100;
        }else if(val=='D'){
            num=500;
        }else if(val=='M'){
            num=1000;
        }
        return num;
    }
    int romanToInt(string s) {
        int sum = 0 ;
        int index = 0;
        while(index<s.size()-1){
        if(nums(s[index])<nums(s[index+1])){
            sum-=nums(s[index]);
        }else{
          sum+=nums(s[index]);  
        }
            index++;
    }
        sum+=nums(s[s.size()-1]);
        return sum ;
    }
};