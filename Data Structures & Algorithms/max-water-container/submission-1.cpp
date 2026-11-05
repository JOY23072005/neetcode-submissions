class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxi = 0;
        int low = 0;
        int high = heights.size()-1;
        while(low<high){
            int area = min(heights[low],heights[high]) * (high-low);
            if(area>maxi){
                maxi = area;
            }
            if(heights[low]<heights[high]){
                low++;
            }else{
                high--;
            }
        }
        return maxi;
    }
};
