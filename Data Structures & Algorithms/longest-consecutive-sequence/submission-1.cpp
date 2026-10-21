class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(), nums.end());
        int longest=0,current,length;
        for(auto it : seen){
            if(seen.find(it-1) == seen.end()){
                current = it;
                length=1;
                while(seen.find(current + 1) != seen.end()){
                    current++;
                    length++;
                }    
                longest=max(length,longest);    
            }     
        }
        return longest;
    }
};
