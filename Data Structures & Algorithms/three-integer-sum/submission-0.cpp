class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        for(int i=0;i<nums.size();i++){
            if(i > 0 && nums[i] == nums[i-1])
                continue;
            int left = i+1,right=nums.size()-1;
            int t = -(nums[i]);
            while(left<right){
                if(nums[left]+nums[right] == t){
                    res.emplace_back(vector<int>{nums[left],nums[right],nums[i]});
                    left++;
                    right--;
                    while(left < right && nums[left] == nums[left-1])
                        left++;

                    while(left < right && nums[right] == nums[right+1])
                        right--;
                }
                else if(nums[left]+nums[right] < t)
                    left++;
                else
                    right--;       
            }
        }
        return res;
    }
};
