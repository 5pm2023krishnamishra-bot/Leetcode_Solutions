class Solution {
public:
    int majorityElement(vector<int>& nums) {
        for(int val : nums){
            int freq=0;
            for(int elf:nums){
                if(elf == val){
                    freq++;
                }
            }
            if(freq>nums.size()/2){
                return val;
            }
        }
        return 0;
    }
};