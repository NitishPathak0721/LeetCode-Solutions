
class Solution {
public:
    int reverse(int x) {
        int sum=0;
        int digit;
        while(x!=0){
           digit=x%10;
           x=x/10;
           if(sum>INT_MAX/10 || sum<INT_MIN/10) {
            return 0;
           }
           sum=sum*10+digit;
        }
        return sum;
    
    }
};