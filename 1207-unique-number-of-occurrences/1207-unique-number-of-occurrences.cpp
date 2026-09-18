class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        int num=arr.size();
        for(int i=0;i<num;i++){
            mp[arr[i]]++;
        }
        unordered_set<int>result;
        for(auto it:mp){
           if(result.find(it.second)!=result.end()){
            return false;
           }
           result.insert(it.second);
        } 
        return true;
    }
};