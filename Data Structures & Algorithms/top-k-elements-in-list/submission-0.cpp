class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int> freq;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector<pair<int,int>> arr(freq.begin(), freq.end());
        sort(arr.begin(), arr.end(),
            [](auto a, auto b) {
            return a.second > b.second;
        });
        for(int i = 0; i < k; i++) {
            res.emplace_back(arr[i].first);
        }
        return res; 
    }
};
