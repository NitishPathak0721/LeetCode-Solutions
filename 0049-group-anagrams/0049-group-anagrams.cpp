class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        int str=strs.size();
        for(int i=0;i<str;i++){
            string num=strs[i];
            sort(num.begin(),num.end());
            mp[num].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};