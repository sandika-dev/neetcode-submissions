class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> ans;
        for (string names:strs){
            string key=names;
            sort(key.begin(),key.end());
            mp[key].push_back(names);    
        }
        for(auto result:mp){
            ans.push_back(result.second);
        }
        return ans;
    }
};
