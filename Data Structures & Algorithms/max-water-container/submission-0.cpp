class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0,r=heights.size()-1;
        int maxArea=0,Area;
        while(l<r){
            Area = min(heights[l],heights[r]) * (r-l);
            maxArea = max(Area,maxArea);
            if(heights[l] < heights[r])
                l++;
            else
                r--;
        }
        return maxArea;
    }
};
