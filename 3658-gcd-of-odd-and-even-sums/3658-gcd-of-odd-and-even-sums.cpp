class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumEven=0;
        int sumOdd=0;
        for(int i=1;i<=2*n;i++){
            if(i%2==0){
                sumEven+=i;
            }else{
                sumOdd+=i;
            }
        }
        int maxi=max(sumEven,sumOdd);
        int m=0;
        for(int i=1;i<=maxi;i++){
            if(sumEven%i==0&&sumOdd%i==0){
                m=max(m,i);
            }
        }
        return m;
    }
};