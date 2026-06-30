class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size());
        vector<int> prefix(nums.size());
        vector<int> suffix(nums.size());
        prefix[0]=1;
        suffix[nums.size()-1]=1;
        // prefix
        for(int i=1;i<nums.size();i++){
            prefix[i]=prefix[i-1]*nums[i-1];
        }
        // suffix
        for(int i= nums.size()-2;i>=0;i--){
            suffix[i]=suffix[i+1]*nums[i+1];
        }
        ans[0]=suffix[0];
        ans[nums.size()-1]=prefix[nums.size()-1];
        for(int i=1;i<nums.size()-1;i++){
            ans[i]=prefix[i]*suffix[i];
        }
        return ans;
    }
};