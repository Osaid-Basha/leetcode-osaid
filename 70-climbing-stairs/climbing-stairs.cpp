class Solution {
public:
    int climbStairs(int n) {
        int one=1,tow=1;
       for(int i=n-1;i>0;i--){
                int temp=one;
                one=one+tow;
                tow=temp;
       }
       return one;
    }
};