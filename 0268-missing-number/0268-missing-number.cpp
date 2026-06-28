class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int j=0;
        int i;
        int ans=0;
        if(nums.size()==1){
            if(nums[0]<=0){
                ans=nums[0]+1;
            }
            else{
                ans=nums[0]-1;
            }
        }
        if(nums.size()==2 ){
            if(nums[0]==nums[1]-1 && nums[0]<=0){
                ans=nums[1]+1;
            }
            else if(nums[0]==nums[1]-1 && nums[0]>0){
                ans=nums[0]-1;
            }
            else{
                ans=nums[0]+1;
            }
        }
        for( i=nums[0];i<nums.size();i++){
            if(nums[j]!=i && nums.size()>2){
                ans =i ;
                break;
            }
            j++;
        }
        if (nums[nums.size()-1]==i-1 && nums.size()>2){
            ans=i;
        }
        return ans;
    }
};