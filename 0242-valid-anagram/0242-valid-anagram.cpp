class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int num=s.size(),num1=t.size();
        if(num!=num1) return false;
        for(int i=0;i<num;i++){
            if(s[i]!=t[i]){
                return false;
            }
        }
        
        return true;
    }
};