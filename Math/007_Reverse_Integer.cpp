/*
Problem: Reverse Integer
Platform: LeetCode
Difficulty: Medium

 Approach:
-Extract last digit using modulo operator
-Build reverse number using sum variable
-Main thing is to check overflow and underflow before multiplying by 10

 Time Complexity: O(log(n))
 Space Complexity: O(1)


  class Solution {
public:
    int reverse(int x) {
        int sum=0;
        int digit;
        while(x!=0){
           digit=x%10;
           if(sum>INT_MAX/10 || sum<INT_MIN/10) {
            return 0;
           }
           sum=sum*10+digit;
           x=x/10;
        }
        return sum;
    
    }
};
