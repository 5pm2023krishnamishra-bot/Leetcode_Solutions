class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int size=nums.size();
        for(int i=0;i<size;i++){
            for(int m=0;m<size;m++){
                if(nums.at(i) + nums.at(m) == target && i!=m){
                    ans.push_back(i);
                    ans.push_back(m);
                    break;
                }
              if(nums.at(i) + nums.at(m) == target ){
                break;
              }
             
            }
            if(ans.size()!=0){
                break;
              }
        }
        return ans;
    }
};