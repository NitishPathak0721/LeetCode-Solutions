class Solution{
public:
    int subarraySum(vector<int> &nums, int k){
        //we will do this question with the help of prefixSum+hashmap
        // prefix sum mean sum of current element and prevoius element 
        // after calculating prefix sum we will subtract the currentsum-target and see if the required one present in the map or not if present then increment count+=mp[find];
        //most important mp[0]=1 its represent a empty prefix and when the current prefix sum==k then the subarray count from the starting index
        unordered_map<int,int>mp;
        int sum=0,count=0;
        mp[0]=1;
        for(int num:nums){
            sum+=num;
            int need=sum-k;
            if(mp.find(need)!=mp.end()){
                count+=mp[need];
            }
            mp[sum]++;
        }
        return count;
    }
};