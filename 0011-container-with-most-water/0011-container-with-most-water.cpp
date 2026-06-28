class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int max_vol=0;
        while(right>left){
           int width=right-left;
            int h=min(height[right] , height[left]);
            max_vol=max(max_vol , width*h);
            if(height[right]>height[left]){
                left++;
            }
            else{
                right--;
                }
        }
        return max_vol;
    }
};