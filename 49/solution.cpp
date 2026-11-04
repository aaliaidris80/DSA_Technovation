class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(int i =0;i<strs.size();i++)
        {
            string s= strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i]);
        }
        vector<vector<string>>output;
        for ( auto x : mp)
        {
            output.push_back(x.second);
        }
        return output;
    }
};
