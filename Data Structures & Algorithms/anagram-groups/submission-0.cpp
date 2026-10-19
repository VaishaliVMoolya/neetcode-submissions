class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> groups;
        vector<vector<string>> result;
        for(auto it:strs){
            string s = it;
            sort(s.begin(),s.end());
            groups[s].push_back(it);
        }
        for(auto& entry:groups){
            result.emplace_back(entry.second);
        }
        return result;
    }
};
