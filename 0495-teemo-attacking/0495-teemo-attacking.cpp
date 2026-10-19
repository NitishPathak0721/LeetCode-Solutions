//TLE
/*
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
       vector<int>arr;
       int num=timeSeries.size();
       int count;
       for(int i=0;i<num;i++){
            int nums=timeSeries[i];
            count=0;
            while(count<duration){
                arr.push_back(nums);
                nums++;
                count++;
            }
       } 
       sort(arr.begin(),arr.end());
       arr.erase(unique(arr.begin(), arr.end()), arr.end());
       int num1=arr.size();
       return num1;
    }
};
*/
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int num=timeSeries.size();
        int total=0;
        if(num==0 || duration==0) return 0;
        for(int i=0;i<num-1;i++){
            total+=min(duration,timeSeries[i+1]-timeSeries[i]);
        }
        total+=duration;
        return total;
    }
};