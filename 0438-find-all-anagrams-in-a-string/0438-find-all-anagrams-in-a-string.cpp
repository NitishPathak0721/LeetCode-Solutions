class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        if (s.size() < p.size())
            return ans;

        vector<int> freqP(26, 0);
        vector<int> freqS(26, 0);

        // Frequency of characters in p
        for (char c : p) {
            freqP[c - 'a']++;
        }

        int k = p.size();

        // First window
        for (int i = 0; i < k; i++) {
            freqS[s[i] - 'a']++;
        }

        if (freqS == freqP)
            ans.push_back(0);

        // Slide the window
        for (int i = k; i < s.size(); i++) {
            // Add new character
            freqS[s[i] - 'a']++;

            // Remove character leaving the window
            freqS[s[i - k] - 'a']--;

            if (freqS == freqP)
                ans.push_back(i - k + 1);
        }

        return ans;
    }
};
