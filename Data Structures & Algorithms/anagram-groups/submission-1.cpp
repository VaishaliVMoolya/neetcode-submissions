class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        vector<vector<string>> result;
        for(auto it:strs){
            int freq[26] = {0};
            for(auto ch:it){
                freq[ch-'a']++;
            }
            string key;
            for(int i=0;i<26;i++){
                key += to_string(freq[i]);
                key += '#';
            }
            groups[key].push_back(it);
        }
        for(auto& entry : groups){
            result.emplace_back(entry.second);
        }
        return result;
    }
};
